##############################################################################
# M O D E L   M A K E   R U L E S
#
# NAME: cyberPhysicalSystem
#
##############################################################################

sp				:= $(sp).x
dirstack_$(sp)	:= $(d)
d				:= $(dir)


SOURCES_$(d)	:= $(wildcard $(d)/*.cpp)
OBJECTS_$(d)	:= $(SOURCES_$(d):%.cpp=%.o)

SOURCES	:= $(SOURCES) $(SOURCES_$(d))
OBJECTS	:= $(OBJECTS) $(OBJECTS_$(d))

d	:= $(dirstack_$(sp))
sp	:= $(basename $(sp))
