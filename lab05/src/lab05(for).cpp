#include <iostream>
using namespace std;

int main() {
	int number = 122221;
	int firstPart = 0;
	int secondPart = 0;

	for (int i = 0; i < 6; i++) {
		number = number / 10;
	}

	for (int i = 0; i < 3; i++) {
		firstPart = number / 10;
	}

	for (int i = 5; i > 2; i--) {
		secondPart = number % 10;
	}

	if (firstPart == secondPart) {
		printf("lucky ticket");
	}

	else {
		printf("it is not");
	}
}