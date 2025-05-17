#include "gtest/gtest.h"
#include "myUtils.h"

TEST(ConvTen2TwoTest, ZeroInput) {
    EXPECT_EQ(convTen2Two(0), "0");
}

TEST(ConvTen2TwoTest, NormalCases) {
    EXPECT_EQ(convTen2Two(1), "1");
    EXPECT_EQ(convTen2Two(2), "10");
    EXPECT_EQ(convTen2Two(15), "1111");
    EXPECT_EQ(convTen2Two(255), "11111111");
    EXPECT_EQ(convTen2Two(4294967295), "11111111111111111111111111111111");
}
