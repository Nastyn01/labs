/**
* file main.cpp
* brief розробка Doxygen документації до лабораторної роботи №7
* author Syzonenko Anastasia
* version 1.0
* date 18.12.2020
*/

#include <iostream>
#include <math.h>
#define LENGHT 40
/**
* Функція для розрахунку "щасливого" квитка та підрахування слів у реченні
* 
* - створення змінних
* - розрахунок результату за допомогою циклів while для "щасливого квитка та циклу for для підрахування слів
* @return printf("lucky ticket"),  printf("it is not\n"), printf("%d\n", count)
* @param printf("lucky ticket") - "щасливий", printf("it is not\n") - не "щасливий", printf("%d\n", count) - кількість слів
*/
int checkForLuckyTicket();
int massive();
int main() {

    checkForLuckyTicket();
    massive();

    return 0;
}
int checkForLuckyTicket() {
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
        printf("it is not\n");
    }
    return 0;
}
int massive() {
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