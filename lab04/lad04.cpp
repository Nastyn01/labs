#include <iostream>

void y1(int x);
void y2(int x);

int main() {
    for (int x = -5; x <= 2; x++) {
        y1(x);
        y2(x);
    }
    void y1(int x) {
        double y1 = (double)-1 / x;
        printf("y1 = -1 / x: x = %i, y = %f \n", x, y1);
    }
    void y2(int x) {
        int y2 = x ^ 2;
        printf("y2 = x^2: x = %i, y = %i \n", x, y2);
    }
}