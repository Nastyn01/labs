#include <iostream>

int main() {
    for (int x = -5; x <= 2; x++) {
        double y1 = (double)-1 / x;
        printf("y1 = -1 / x: x = %i, y = %f \n", x, y1);
    }
    for (int x = -5; x <= 2; x++) {
        int y2 = x ^ 2;
        printf("y2 = x^2: x = %i, y = %i \n", x, y2);
    }
}