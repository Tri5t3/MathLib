#ifndef MATHLIB_H
#define MATHLIB_H

#include <string>

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

int absVal(int input);

long absVal(long input);

double absVal(double input);

long ceiling(double input);

long floor(double input);

long round(double input, RoundingRule rule = ROUND_HALF_UP);

double pow(double base, long power);

std::string toString(int num, unsigned int radix = 10, bool low_case = true);

int gcd(int val1, int val2);

#endif