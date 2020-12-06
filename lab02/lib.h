#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ANIMAL_COUNT 10
enum animal_type {
	PIG,
	COW,
	DOG,
	CAT,
	HUMAN,
	ANIMAL_TYPE_COUNT
};
struct animal {
	enum animal_type type;
	unsigned int height;
	unsigned int weight;
};
char* get_animal_type_name(enum animal_type type);
void generate_animal(stuct animal* entity);
void show_animals(stuct animal animas[], unsigned int count);
#endif