#include<iostream>
using namespace std;

int main() {
#define LENGHT 40

	char arr[LENGHT] = "I want  to    eat";
	int count = 0;

	for (int i = 1; i <= LENGHT; i++) {
		if (arr[i] == ' ') {
			if (arr[i - 1] != ' ') {
				count++;
			}
		}
	}
	if (arr[LENGHT - 1] != ' ') count++;
	printf("%d\n", count);
	return 0;
}