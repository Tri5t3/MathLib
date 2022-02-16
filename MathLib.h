// 
// This is the header file of the Math Library
// Tommy Kong
// 9081632904
// kong42@wisc.edu
//

#ifndef MATHLIB_H
#define MATHLIB_H

#include <string>

/**
 * @brief this enum is comprised of all rounding rules
 * 
 */
enum RoundingRule
{
    ROUND_DOWN,
    ROUND_UP,
    ROUND_TO_ZERO,
    ROUND_AWAY_ZERO,
    ROUND_HALF_UP,
    ROUND_HALF_DOWN,
    ROUND_HALF_TO_ZERO,
    ROUND_HALF_AWAY_ZERO,
    ROUND_HALF_TO_EVEN,
    ROUND_HALF_TO_ODD
};

/**
 * @brief  This function returns the absolute value of the input
 * 
 * @param int
 * @return int - absolute value of input
 */
int absVal(int input);

/**
 * @brief  This function returns the absolute value of the input
 * 
 * @param long
 * @return long - absolute value of input
 */
long absVal(long input);

/**
 * @brief  This function returns the absolute value of the input
 * 
 * @param double
 * @return double - absolute value of input
 */
double absVal(double input);

/**
 * @brief  This function returns the ceiling value of the input
 * 
 * @param long
 * @return long - ceiling value of input
 */
long ceiling(double input);

/**
 * @brief  This function returns the floor value of the input
 * 
 * @param long
 * @return long - floor value of input
 */
long floor(double input);

/**
 * @brief  This function returns the rounded value of the input with given rule
 * 
 * @param double value to round, Rouding Rule
 * @return long - rounded value of the input with given rule
 */
long round(double input, RoundingRule rule = ROUND_HALF_UP);

/**
 * @brief  This function returns the power of given values
 * 
 * @param double base, long exponent
 * @return double - calculated value
 */
double pow(double base, long power);

/**
 * @brief  This function returns the representation of the given value of the given radix
 * 
 * @param int base value, unsigned int radix value, boolean return in lower case
 * @return string
 */
std::string toString(int num, unsigned int radix = 10, bool low_case = true);

/**
 * @brief  This function returns gcd of given values
 * 
 * @param int vals to find gcd
 * @return int gcd
 */
int gcd(int val1, int val2);

#endif