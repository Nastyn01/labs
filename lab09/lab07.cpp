/**
@mainpage
@file main.cpp
@brief розробка Doxygen документації до лабораторної роботи №7
@author Syzonenko Anastasia
@version 1.0
@date 18.12.2020
*/

/**
* LENGHT 40 - кількість усих символів
*/
#include <iostream>
#include <math.h>
#define LENGHT 

/**
* checkForLuckyTicket - функція для перевірки даного номера на "щасливий" квиток
* 
* Послідовність дій:
* - задання числа;
* - виконання розрахунків над першою частиною;
* - виконання розрахунків над другою частиною;
* - перевірка умови завдання;
* - printf("lucky ticket") - перевірка вірна, то квиток є "щасливим";
* - printf("it is not\n") - перевірка не вірна, то квиток не є "щасливим;
*/
int checkForLuckyTicket();

/**
* massive - функція для підрахування слів у реченні
* 
* Послідовність дій:
* - задання речення з різною кількістю пропусків;
* - виконнання обрахунків слів у реченні незважаючи на пропуски;
* - printf("%d\n", count) - підрахована кількість слів у реченні;
*/
int massive();


/**
* Головна функція у якій відбуваються всі операції
*/
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