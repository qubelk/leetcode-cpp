#include <gtest/gtest.h>

#include "src/easy/palindrome-number/palindrome_number.hpp"

TEST(PalindromeNumber, CorrectPalindromCheck) {
	Solution s;
	EXPECT_EQ(s.IsPolindrome(121), true);
	EXPECT_EQ(s.IsPolindrome(123), false);
	EXPECT_EQ(s.IsPolindrome(1223221), true);
	EXPECT_EQ(s.IsPolindrome(1223231), false);
}
