#include <iostream>
#include <math.h>
using namespace std;

void calculate() {

    int a = 1001;
    int p = 2;
    int result = 0;
    int i = 0;

    while (a > 0) {
        result += a % 10 * pow(p, i);
        i++;
        a /= 10;
    }
    cout << result;
    return;
}
int main()
{
    calculate();
}