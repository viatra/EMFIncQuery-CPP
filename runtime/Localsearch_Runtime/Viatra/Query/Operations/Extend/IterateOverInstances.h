#pragma once

#include "../../Util/Defs.h"
#include "ExtendOperation.h"

#include <list>
#include <type_traits>

namespace Viatra {
namespace Query {
namespace Operations {
namespace Extend {

/**
 * @brief Instance iteration.
 *
 * This extend operation binds a frame variable to an instance of a specified type.
 *
 * @tparam SrcType The type of the variable to be bound.
 * @tparam MatchingFrame Describes the structure of the *MatchingFrame* the operation is executed on.
 */
template<typename SrcType, typename MatchingFrame>
class IterateOverInstances: public ExtendOperation<SrcType, std::list<SrcType>, MatchingFrame> {
    typedef SrcType MatchingFrame::* BindPoint;
public:
    /**
     * Creates a new instance of an IterateOverInstances operation.
     *
     * @param bind The function used to bind the variable in a frame.
     * @param clazz The id of the type to be iterated.
     */
    IterateOverInstances(BindPoint bind, EClass clazz);
    void on_initialize(MatchingFrame& frame, const Matcher::ISearchContext& context);
private:
    EClass _clazz;

};

template<typename SrcType, typename MatchingFrame>
inline IterateOverInstances<SrcType, MatchingFrame>::IterateOverInstances(BindPoint bind, EClass clazz)
	: ExtendOperation<SrcType, std::list<SrcType>, MatchingFrame>(bind), _clazz(clazz) {
}

template<typename SrcType, typename MatchingFrame>
inline void IterateOverInstances<SrcType, MatchingFrame>::on_initialize(MatchingFrame&, const Matcher::ISearchContext&) {
	auto& data = ModelIndex<std::remove_pointer<SrcType>::type>::instances();
	ExtendOperation<SrcType, std::list<SrcType>, MatchingFrame>::set_data(std::cbegin(data), std::cend(data));
}

template<typename SrcType, typename MatchingFrame>
inline IterateOverInstances<SrcType, MatchingFrame>* create_IterateOverInstances(SrcType MatchingFrame::* bind, EClass clazz) {
	return new IterateOverInstances<SrcType, MatchingFrame>(bind, clazz);
}

} /* namespace Extend */
} /* namespace Operations */
} /* namespace Query */
} /* namespace Viatra */