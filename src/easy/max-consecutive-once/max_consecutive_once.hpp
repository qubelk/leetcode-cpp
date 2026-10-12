#pragma once

#include <vector>

class Solution {
public:
	int FindMaxConsecutiveOnce(std::vector<int>& nums) {
		int result = 0;
		int counter = 0;

		for (size_t i = 0; i < nums.size(); ++i) {
			if (nums[i] == 1) {
				counter++;
				result = std::max(counter, result);
			} else {
				counter = 0;
			}
		}

		return result;
	}
};
