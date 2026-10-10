include(FetchContent)

FetchContent_Declare(
	googletest
	GIT_REPOSITORY https://github.com/google/googletest.git
	GIT_TAG v1.18.0
)

FetchContent_MakeAvailable(googletest)

add_executable(
	unit_tests
	easy/two-sum/two_sum_tests.cpp
	easy/palindrome-number/palindrome_number_tests.cpp
	easy/roman-to-integer/roman_to_integer_tests.cpp
)

target_include_directories(unit_tests PRIVATE ${CMAKE_SOURCE_DIR})
target_link_libraries(unit_tests PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(unit_tests)
