#include "Phone.h"

int main() {
	int size = 3;
	Phone *phones = new Phone[size];

	read_from_file(phones, size);
	write_to_console(phones, size);
	sort(phones, size);
	write_to_file(phones, size);

	return 0;
}