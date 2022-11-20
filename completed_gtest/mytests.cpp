#include "gtest/gtest.h"
#include "myfunctions.h"
#include <iostream>
TEST(myfunctions, add)
{
    GTEST_ASSERT_EQ(add(10, 22), 12);
    GTEST_ASSERT_EQ(add(1, 5), 6);
    GTEST_ASSERT_EQ(add(2, 9), 11);
    GTEST_ASSERT_EQ(add(10, 22), 32);
    GTEST_ASSERT_EQ(add(0, 0), 0);
}


int main(int argc, char *argv[])
{
    std::cout << "Testing!!!";
    ::testing::InitGoogleTest(&argc, argv);
    system("PAUSE");
    return RUN_ALL_TESTS();
}