#include <gtest/gtest.h>

TEST(SampleTestOne, TestOne) 
{
    EXPECT_EQ(1, 1);
}

GTEST_API_ int main(int argc, char **argv) 
{
    //printf("Running main() from %s\n", __FILE__);

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
