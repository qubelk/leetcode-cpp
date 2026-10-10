#include <gtest/gtest.h>

#include "src/easy/roman-to-integer/roman_to_integer.hpp"

TEST(RomanToInteger, CorrectTranslation) {
	Solution s;
	EXPECT_EQ(s.RomanToInteger("III"), 3);
	EXPECT_EQ(s.RomanToInteger("VI"), 6);
	EXPECT_EQ(s.RomanToInteger("IV"), 4);
	EXPECT_EQ(s.RomanToInteger("LVIII"), 58);
	EXPECT_EQ(s.RomanToInteger("MCMXCIV"), 1994);
}
