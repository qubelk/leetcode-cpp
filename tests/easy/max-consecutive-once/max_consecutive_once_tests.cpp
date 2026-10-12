#include <gtest/gtest.h>

#include "src/easy/max-consecutive-once/max_consecutive_once.hpp"

TEST(MaxConsecutiveOnce, CorrectFind) {
	Solution s;
	std::vector<int> data1{1, 0, 0, 1, 1, 0};
	std::vector<int> data2{0, 0, 1, 1, 1};
	std::vector<int> data3{1, 0, 1, 0};

	EXPECT_EQ(s.FindMaxConsecutiveOnce(data1), 2);
	EXPECT_EQ(s.FindMaxConsecutiveOnce(data2), 3);
	EXPECT_EQ(s.FindMaxConsecutiveOnce(data3), 1);
}
