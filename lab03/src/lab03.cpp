#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
void func4() {

	int a = 1110;
	int p = 2;
	int result = 0;
	int i = 0;

	while (a > 0) {
		result += a % 10 * pow(p, i);
		i++;
		a /= 10;
	}
	return;
}