#include "lib.h"
char* get_animal_type_name(enum animal_type type)
{
	char* result;
	switch (type){
	case CAT:
		result = "Cat";
		break;
	case DOG:
		result = "Dog";
		break;
	case COW:
		result = "Cow";
		break;
	case PIG:
		result = "Pig";
		break;
	case HUMAN:
		result = "HUMAN";
		break;
	default:
		result = "N/A";
	}
	return result;
}
char* get_animal_sound(enum animal_type type)
{
	char* result;
	switch (type) {
	case CAT:
		result = "Meow";
		break;
	case DOG:
		result = "Woof";
		break;
	case COW:
		result = "Mu";
		break;
	case PIG:
		result = "Xru";
		break;
	case HUMAN:
		result = "Hello!";
		break;
	default:
		result = "N/A";
	}
	return result;
}
void generate_animal(struct animal* entity)
{
	entity->height = (unsigned int)rang() % INT8_MAX;
	entity->height = (unsigned int)rang() % INT8_MAX;
	entity->weight = (unsigned int)rang() % INT8_MAX;
	entity->type = (unsigned int)rang() % ANIMAL_TYPE_COUNT;
}
void show_animal(struct animal animals[], unsigned int count)
{
	for (unsigned int i = 0; i < count; i++) {
		printf("Інформація про тварину №%02u:", i + 1);
		printf("%s: зріст = %u см, маса = %u гр. \n",
			get_animal_type_name(animals[i].type), animals[i].height, animals[i].weight);
		printf("Звук:%s", get_animal_type_sound(animals[i].type));
	}
}