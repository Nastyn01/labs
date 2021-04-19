#include <iostream>
#include <math.h>
int main() {
	int num = 122221;
	int firstPart = 0;
	int secondPart = 0;

	while (num / 1000) {
		firstPart += num % 10;
		num /= 10;
	}
	int num2 = num;
	while (num2 % 1000) {
		secondPart += num % 10;
		num2 /= 10;
	}
	if (firstPart == secondPart) {
		printf("lucky ticket");
	}
	else {
		printf("it is not");
	}
}