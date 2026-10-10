#pragma once

class Solution {
public:
	bool IsPolindrome(int x) {
		if (x < 0) {
			return false;
		}

		int orig = x;
		long long rev = 0;
		while (x > 0) {
			rev = rev * 10 + (x % 10);
			x /= 10;
		}

		return orig == rev;
	}
};
