file(GLOB SRCS "*.h" "*.cpp")

include_directories(../)
include_directories(../../PinBank/)

add_executable(RotaryEncoderTest ${SRCS} ../RotaryEncoder.cpp)

target_link_libraries(RotaryEncoderTest 
	libgmock
	libgtest
)

install(TARGETS RotaryEncoderTest DESTINATION bin)
