# Лабораторна робота №7. Функції
## Вимоги:
* Розробник: Сизоненко Анастасія Сергіївна
* Загальне завдання: Реалізувати програму з використанням функцій.
* Індивідуальне завдання: 
1) Визначити, чи є ціле 6-значне число "щасливим" квитком.
2) Знайти кількість слів за умови, що між словами може бути будь-яка кількість пропусків.
## Опис програми:
* Функціональне призначення:
 1) Дослідження номера на "щасливий" квиток.
 2) Підрахування слів, незважаючи на пропуски.
* Опис логічної структури:
  * Функція main. Задає 6-значне число та речення з якими потрібно зробити дії. Викликає функції checkForLuckyTicket та massive. Схема алгоритму функції.
![схема](https://i.imgur.com/4YGu6eG.png)
 * Код програми:
```
#include <iostream>
#include <math.h>
#define LENGHT 40

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
```
## Використання:
За допомогою відлагодника дізнаємоя результати роботи.
![LuckyTicket](https://i.imgur.com/iDtMhm5.png)
![massive](https://i.imgur.com/bm9gTKy.png)
## Висновок:
На даній лабораторній роботі ознайомилися та навчилися працювати з Markdown документацією для написання звітів.