#pragma once

#include <vector>

class Solution {
public:
	static std::vector<int> TwoSum(const std::vector<int>& nums, int target) {
		for (int i = 0; i < nums.size() - 1; ++i) {
			for (int j = i + 1; j < nums.size(); ++j) {
				if (nums[i] + nums[j] == target) {
					return {i, j};
				}
			}
		}

		return {};
	}
};
