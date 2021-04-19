#define _CRT_SECURE_NO_WARNINGS
#define filename "D:\\File15.txt"
#define filenameB "D:\\FileB15.dat"

using namespace std;

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

struct Display {
	int width;
	int height;
};

struct Phone {
	Display display;
	bool shockResist;
	bool waterResist;
	string name;
	int RAM;
	int memory;
	int OC;
};

void read_from_file(struct Phone*,int);
void write_to_file(struct Phone*,int);
void write_to_console(struct Phone*,int);
void sort(struct Phone*,int);
Phone create(int index);
Phone read_from_file_bynary();
void write_to_file_bynary(struct Phone*,int);



