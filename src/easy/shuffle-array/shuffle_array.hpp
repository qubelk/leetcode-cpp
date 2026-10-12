#pragma once

#include <vector>

class Solution {
public:
	std::vector<int> Shuffle(std::vector<int>& nums, int n) {
		std::vector<int> res;
		res.reserve(n * 2);

		for (int i = 0; i < n; ++i) {
			res.push_back(nums[i]);
			res.push_back(nums[i + n]);
		}

		return res;
	}
};
