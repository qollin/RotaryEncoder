file(GLOB SRCS "*.h" "*.cpp")

include_directories(../main/)
include_directories(../../PinBank/)

add_executable(RotaryEncoderTest ${SRCS} ../main/RotaryEncoder.cpp)

target_link_libraries(RotaryEncoderTest 
	libgmock
	libgtest
)

install(TARGETS RotaryEncoderTest DESTINATION bin)
