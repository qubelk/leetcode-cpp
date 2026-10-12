#include <gtest/gtest.h>

#include "src/easy/shuffle-array/shuffle_array.hpp"

TEST(ShuffleArray, CorrectShuffle) {
	Solution s;

	std::vector<int> data1{2, 5, 4, 7, 1, 3};
	std::vector<int> data2{1, 1, 4, 6, 2, 5, 8, 8};
	std::vector<int> data3{2, 7};

	EXPECT_EQ(s.Shuffle(data1, data1.size() / 2), std::vector<int>({2, 7, 5, 1, 4, 3}));
	EXPECT_EQ(s.Shuffle(data2, data2.size() / 2), std::vector<int>({1, 2, 1, 5, 4, 8, 6, 8}));
	EXPECT_EQ(s.Shuffle(data3, data3.size() / 2), std::vector<int>({2, 7}));
}
