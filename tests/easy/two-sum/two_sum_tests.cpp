#include <gtest/gtest.h>

#include "src/easy/two-sum/two_sum.hpp"

TEST(TwoSum, CorrectTargetFind) {
	EXPECT_EQ(Solution::TwoSum({1, 2, 3, 4}, 6), std::vector<int>({1, 3}));
	EXPECT_EQ(Solution::TwoSum({2, 7, 11, 15}, 9), std::vector<int>({0, 1}));
	EXPECT_EQ(Solution::TwoSum({3, 3}, 6), std::vector<int>({0, 1}));
	EXPECT_EQ(Solution::TwoSum({4, 2, 1, 3}, 5), std::vector<int>({0, 2}));
}
