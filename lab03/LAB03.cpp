#include <iostream>
int main()
{
#define VALUE2 6763
	long SYS8 = 8;
	long num11;
	long num12;
	long num13;
	long num14;
	double val10;
	num11 = VALUE2 % 10;
	num12 = (VALUE2 % 100) / 10;
	num13 = (VALUE2 % 1000) / 100;
	num14 = VALUE2 / 1000;
	val10 = num11 + num12 * SYS8 + num13 * SYS8 * SYS8 + num14 * SYS8 * SYS8 * SYS8;
	printf("Result:\n val10=%.f\n", val10);
	return 0;
}