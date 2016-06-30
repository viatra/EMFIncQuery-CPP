// **************************************
//
// COPY ME NEXT TO GENERATED MAKEFILE
//
// **************************************

#include "school_def.h"

#include "Viatra\Query\QueryEngine.h"
#include "Viatra\Query\Matcher\ModelIndex.h"
#include "Viatra\Query\School\StudentsOfSchoolMatcher.h"

#include <cmath>
#include <chrono>
#include <iostream>
#include <functional>
#include <string>
#include <vector>

using namespace ::school;

namespace Viatra {
namespace Query {
template<>
struct ModelIndex<::school::School, ::school::School> {
	static const std::list<::school::School*>& instances(const ::school::School* modelroot) {
		return ::school::School::_instances;
	}
};

template<>
struct ModelIndex<::school::SchoolClass, ::school::School> {
	static const std::list<::school::SchoolClass*>& instances(const ::school::School* modelroot) {
		return ::school::SchoolClass::_instances;
	}
};

template<>
struct ModelIndex<::school::Teacher, ::school::School> {
	static const std::list<::school::Teacher*>& instances(const ::school::School* modelroot) {
		return ::school::Teacher::_instances;
	}
};
}
}

std::vector<School*> schools;

const int YEARS = 5;
const int COURSES = 20;
const int CLASSES = 4;
const int STUDENTS = 500;
const int TEACHERS = 10;

const int COURSES_PER_CLASS = 5;
const int COURSES_PER_TEACHER = 2;

std::string get_random_string(const std::string& characters, int length) {
	std::string ret;
	for (int i = 0; i < length; ++i) {
		ret += characters[rand() % characters.size()];
	}

	return ret;
}

std::string get_alpha_string(int length) {
	return get_random_string("abcdefghijklmnopqrstvwxyz", length);
}

std::string get_alphanumeric_string(int length) {
	return get_random_string("ABCDEFGHIJKLMNOPQRSTVWXYZ1234567890", length);
}

long get_unique_id() {
	static long id = 0;
	long new_id = id++;
	return new_id;
}

void init_model(int scale) {
	std::cout << "Initializing model (scale : " << scale << ")" << std::endl;

	for (int i = 0; i < scale; ++i) {
		auto school = new School();
		school->name = "Budapest Institute of Technology and Economics" + i;
		schools.push_back(school);

		for (int j = 0; j < YEARS; ++j) {
			auto year = new Year();
			year->school = school;
			year->startingDate = 2010+j;

			school->years.push_back(year);
		}

		for (int j = 0; j < COURSES; ++j) {
			auto course = new Course();
			course->subject = get_alpha_string(16);
			course->weight = rand() % 100;
			course->school = school;

			school->courses.push_back(course);
		}

		std::vector<::SchoolClass*> classes;
		for (int j = 0; j < CLASSES; ++j) {
			auto clazz = new SchoolClass();
			auto year = school->years[j % YEARS];

			clazz->code = get_alpha_string(1)[0];
			for (int k = 0; k < COURSES_PER_CLASS; ++k) {
				auto course = school->courses[j * COURSES_PER_CLASS + k % COURSES];
				clazz->courses.push_back(course);
				course->schoolClass = clazz;
			}
			clazz->year = year;
			year->schoolClasses.push_back(clazz);
			classes.push_back(clazz);
		}

		std::vector<::Student*> students;
		for (int j = 0; j < STUDENTS; ++j) {
			auto student = new Student();

			student->name = get_alpha_string(12);
			for (int k = 0; k < floor(sqrt(j)); ++k) {
				auto friend_ = students[k];
				student->friendsWith.push_back(friend_);
				friend_->friendsWith.push_back(student);
			}
			auto clazz = classes[j % CLASSES];
			clazz->students.push_back(student);
			student->schoolClass = clazz;
			students.push_back(student);
		}

		for (int j = 0; j < TEACHERS; ++j) {
			auto teacher = new Teacher();
			teacher->name = get_alpha_string(12);
			for (int k = 0; k < COURSES_PER_TEACHER; ++k) {
				auto course = school->courses[j % COURSES];
				teacher->courses.push_back(course);
				course->teacher = teacher;
				if (k == 0) {
					teacher->homeroomedClass = course->schoolClass;
					course->schoolClass->homeroomTeacher = teacher;
				}
			}
		}
	}
}

void query(int runs) {
	int size;

	auto start = std::chrono::high_resolution_clock::now();

	auto engine = ::Viatra::Query::QueryEngine<School>::empty();
	auto matcher = engine.matcher<::Viatra::Query::School::StudentsOfSchoolQuerySpecification>();

	for (int i = 0; i < runs; ++i) {
		
		auto sos = matcher.matches();
		size = sos.size();
	}

	auto end = std::chrono::high_resolution_clock::now();
	auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

	std::cout << size << std::endl;
	std::cout << "Elapsed time: "  <<  elapsed / runs << " us" << std::endl;
}

void cleanup_model() {
	for (auto&& school : schools) {
		for(auto&& year : school->years) {
			for(auto&& clazz : year->schoolClasses) {
				for(auto&& student : clazz->students) {
					delete student;
				}
				delete clazz;
			}
			delete year;
		}

		for(auto&& course : school->courses) {
			delete course;
		}

		for(auto&& teacher : school->teachers) {
			delete teacher;
		}
	}

	schools.clear();
}

void run(int levels, int runs) {
	for(int i = 0; i < levels; ++i) {
		init_model(pow(2, i));
		query(runs);
		cleanup_model();
	}
}

int main(int argc, char **argv) {
	std::cout << "start" << std::endl;
	run(6, 1000);
}