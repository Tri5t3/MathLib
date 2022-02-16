// 
// This is the source file of the Math Library
// Tommy Kong
// 9081632904
// kong42@wisc.edu
//

#include "MathLib.h"

int absVal(int input)
{
	if (input < 0)
		return -input;
	return input;
}

long absVal(long input)
{
	if (input < 0)
		return -input;
	return input;
}

double absVal(double input)
{
	if (input > 0)
		return input;
	return -input;
}

long ceiling(double input)
{
	long l = input;
	if (input > 0)
	{
		if (l - input != 0)
			return l + 1;
	}
	return l;
}

long floor(double input)
{
	long l = input;
	if (input < 0)
	{
		if (l - input != 0)
			return l - 1;
	}
	return l;
}

long round(double input, RoundingRule rule)
{
	if (input == 0)
		return 0;

	long l = input;
	double digit = absVal(input - l);
	long def = 0;

	if (input > 0)
	{
		if (digit > 0.5)
		{
			def = ceiling(input);
		}
		else
		{
			def = floor(input);
		}
	}
	else
	{
		if (digit < 0.5)
		{
			def = ceiling(input);
		}
		else
		{
			def = floor(input);
		}
	}

	switch (rule)
	{
	case ROUND_DOWN:
		return floor(input);

	case ROUND_UP:
		return ceiling(input);

	case ROUND_TO_ZERO:
		if (input > 0)
			return floor(input);
		return ceiling(input);

	case ROUND_AWAY_ZERO:
		if (input < 0)
			return floor(input);
		return ceiling(input);

	case ROUND_HALF_TO_ZERO:
		if (digit == 0.5)
		{
			if (input > 0)
				return floor(input);
			return ceiling(input);
		}
		return def;

	case ROUND_HALF_AWAY_ZERO:
		if (digit == 0.5)
		{
			if (input < 0)
				return floor(input);
			return ceiling(input);
		}
		return def;

	case ROUND_HALF_DOWN:
		if (digit == 0.5)
		{
			return floor(input);
		}
		return def;

	case ROUND_HALF_UP:
		if (digit == 0.5)
		{
			return ceiling(input);
		}
		return def;

	case ROUND_HALF_TO_EVEN:
		if (digit == 0.5)
		{
			if (ceiling(input) % 2 == 0)
				return ceiling(input);
			return floor(input);
		}

	case ROUND_HALF_TO_ODD:
		if (digit == 0.5)
		{
			if (ceiling(input) % 2 == 1)
				return ceiling(input);
			return floor(input);
		}

	default:
		if (digit == 0.5)
		{
			return ceiling(input);
		}
		return def;
	}
}

double pow(double base, long power)
{
	double ret = 1;
	long exp = absVal(power);
	for (long i = 0; i < exp; i++)
	{
		ret *= base;
	}
	if (power < 0)
		ret = 1 / ret;
	return ret;
}

std::string toString(int num, unsigned int radix, bool low_case)
{
	if (radix > 36)
	{
		return "Radix too large.";
	}

	int abs = absVal(num);
	std::string str = "";

	int remainder = 0;
	char char_val;

	while (abs)
	{
		remainder = abs % radix;
		abs = abs / radix;
		if (remainder >= 10)
		{
			if (low_case)
			{
				char_val = (char)((remainder - 10) + 'a');
			}
			else
			{
				char_val = (char)((remainder - 10) + 'A');
			}
		}
		else
		{
			char_val = (char)(remainder + '0');
		}
		str = char_val + str;
	}

	if (num < 0)
		return "-" + str;
	return str;
}

int gcd(int val1, int val2)
{
	val1 = absVal(val1);
	val2 = absVal(val2);

	if (val1 == val2)
	{
		return val1;
	}

	int gcd = 1;
	while (val1 != val2)
	{
		if (val1 > val2)
		{
			val1 -= val2;
		}
		else
		{
			val2 -= val1;
		}
	}
	gcd = val1;
	return gcd;
}