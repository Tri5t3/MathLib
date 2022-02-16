#include "MathLib.cpp"
#include <iostream>

int main()
{
  int i = -1;
  std::cout << "absVal(int = -1) = " << absVal(i) << std::endl;

  long l = -2;
  std::cout << "absVal(long = -2) = " << absVal(l) << std::endl;

  double d = -3.33;
  std::cout << "absVal(double = -3.33) = " << absVal(d) << std::endl;

  long l4 = ceiling(d);
  std::cout << "ceiling(double = -3.33) = " << l4 << std::endl;

  long l5 = floor(d);
  std::cout << "floor(double = -3.33) = " << l5 << std::endl;

  long l6 = round(d, ROUND_HALF_TO_EVEN);
  std::cout << "round(-3.33, ROUND_HALF_TO_EVEN) = " << l6 << std::endl;

  double d2 = pow(d, 2);
  std::cout << "pow(-3.33, 2) = " << d2 << std::endl;

  int i2 = 25;
  std::string str = toString(i2, 16, true);
  std::cout << "toString(25, hex, true) = " << str << std::endl;

  int i3 = 64;
  int i4 = 24;
  i = gcd(i3, i4);
  std::cout << "gcd(64, 24) is " << i << std::endl;
}