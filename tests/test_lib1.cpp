#include "src/example/lib1/lib1.hpp"
#include "gtest/gtest.h"
#include <string>

TEST(Test_lib1, ReturnHello) {
    const std::string actual = CLib1::PrintHello();
    const std::string expected = "Hello";
    EXPECT_EQ(expected, actual);
}
