#include <gtest/gtest.h>

#include "src/easy/concatenation-of-array/concatenation_of_array.hpp"

TEST(ConcatenationOfArray, CorrectConcatenation) {
	Solution s;
	std::vector<int> data{1, 2, 3, 4};

	EXPECT_EQ(s.GetConcatenation(data), std::vector<int>({1, 2, 3, 4, 1, 2, 3, 4}));
}
