#pragma once
//#define _CRTDBG_MAP_ALLOC
//#include <crtdbg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>


/**
*  Кiлькiсть елементiв у масивi
*/
#define N 6

/**
* підрахунок відповідних елементів
*/

void counter(int size, int* arr);

/**
* Довжина масиву
*/
int size(int* arr);

void read_from_user_file(int* user_temp_array);

void write_to_user_file(int* resulting_arr, int size);
