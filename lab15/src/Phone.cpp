#include "Phone.h"

void read_from_file(struct Phone* phones, int size) {
	std::ifstream in(filename);
	if (in.is_open()) {
		string tmp;

		for (int i = 0; i < size; i++) {
			getline(in, phones[i].name);
			getline(in, tmp);
			phones[i].waterResist = atoi(tmp.c_str());
			getline(in, tmp);
			phones[i].shockResist = atoi(tmp.c_str());
			getline(in, tmp);
			phones[i].RAM = atoi(tmp.c_str());
			getline(in, tmp);
			phones[i].OC = atoi(tmp.c_str());
			getline(in, tmp);
			phones[i].memory = atoi(tmp.c_str());
			getline(in, tmp);
			phones[i].display.height = atoi(tmp.c_str());
			getline(in, tmp);
			phones[i].display.width = atoi(tmp.c_str());
		}
	}in.close();
}
void write_to_file(struct Phone* phones, int size) {
	std::ofstream out(filename);
	if (out.is_open()) {

		for (int i = 0; i < size; i++) {
			out << phones[i].name << endl << phones[i].waterResist << endl << phones[i].shockResist << endl
				<< phones[i].RAM << endl << phones[i].OC << endl << phones[i].memory << endl
				<< phones[i].display.height << endl << phones[i].display.width << endl;
		}

	}out.close();
}
void write_to_console(struct Phone* phones, int size) {
	for (int i = 0; i < size; i++) {
		cout << "Name: " << phones[i].name;
		printf("\nDisplay: %dx%d\n", phones[i].display.height, phones[i].display.width);
		printf("Water Resistance: %d\n", phones[i].waterResist);
		printf("Shock Resistance: %d\n", phones[i].shockResist);
		printf("OC : ");
		switch (phones[i].OC)
		{
		case 0:
			printf("Windows\n");
			break;
		case 1:
			printf("Linux\n");
			break;
		case 2:
			printf("IOS\n");
			break;
		default:
			break;
		}

		printf("RAM:%d MB\n",phones[i].RAM);
		
		printf("Memory: %d MB\n\n", phones[i].memory);


	}
}
void sort(struct Phone* phones, int size) {
	struct Phone tmp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (phones[j].memory > phones[j + 1].memory) {
				tmp = phones[j];
				phones[j] = phones[j + 1];
				phones[j + 1] = tmp;
			}
		}
	}
}
Phone create(int index) {
	Phone phone;


	phone.name = "example_name";
	phone.shockResist = rand() % 2;
	phone.waterResist = rand() % 2;
	phone.display.height = rand() % 1920;
	phone.display.width = rand() % 1080;
	phone.memory = 512 * (2 + rand() % 100);
	phone.OC = rand() % 3;
	phone.RAM = 1024 * (1 + rand() % 8);

	return phone;
}

void write_to_file_bynary(struct Phone* phones, int size) {
	FILE* file;
	file = fopen(filenameB, "wb");
	for (int i = 0; i < size; i++)
		fwrite(&phones, sizeof(Phone), 1, file);

	fclose(file);
}
Phone read_from_file_bynary()
{
	Phone messages = create(0);
	FILE* file;
	file = fopen(filenameB, "rb");
	fread(&messages, sizeof(Phone), 1, file);

	fclose(file);
	return messages;
}