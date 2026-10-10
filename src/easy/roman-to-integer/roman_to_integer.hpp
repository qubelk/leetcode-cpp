#pragma once

#include <string>
#include <unordered_map>

class Solution {
public:
	int RomanToInteger(const std::string& s) {
		std::unordered_map<char, int> roman{
			{'I', 1},
			{'V', 5},
			{'X', 10},
			{'L', 50},
			{'C', 100},
			{'D', 500},
			{'M', 1000},
		};

		int res = 0;
		for (size_t i = 0; i < s.length() - 1; ++i) {
			int current = roman[s[i]];
			int next = roman[s[i + 1]];

			if (current < next) {
				res -= current;
			} else {
				res += current;
			}
		}

		return res + roman[s.back()];
	}
};
