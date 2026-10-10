#pragma once

#include <vector>

class Solution {
public:
	std::vector<int> GetConcatenation(std::vector<int>& nums) {
		size_t n = nums.size();

		std::vector<int> ans;
		ans.reserve(n * 2);

		ans.insert(ans.begin(), nums.begin(), nums.end());
		ans.insert(ans.begin() + n, nums.begin(), nums.end());

		return ans;
	}
};
