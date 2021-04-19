#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>

using namespace std;

int** matrix(int x, int y) {
    int** matrix = new int* [x];
    for (int i = 0; i < x; ++i) {
        matrix[i] = new int[y];
    }
    return matrix;
}

void freeMatrix(int** matrix, int x) {
    for (int i = 0; i < x; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void randomNumbers(int** matrix, const int lines, const int columns)
{
    srand((unsigned int)time(0));

    for (int line = 0; line < lines; line++)
        for (int column = 0; column < columns; column++)
            matrix[line][column] = rand() % 100;
}

void outputMatrix(int** matrix, int x, int y) {
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

int* mainDiagonal(int** matrix, const int lines, const int columns)
{
    int* result = new int[columns];

    for (int line = 0; line < lines; line++)
        result[line] = matrix[line][line];

    return result;
}

void outputDiagonal(int* diagonal, int size) {
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << diagonal[i] << " ";
    }
}

int* sortMatrix(int* diagonal, int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (diagonal[j] > diagonal[j + 1]) {
                temp = diagonal[j];
                diagonal[j] = diagonal[j + 1];
                diagonal[j + 1] = temp;
            }
        }
    }
    return diagonal;
}

int main() {
    int x = 3, y = 3;
    int** A = matrix(x, y);
    randomNumbers(A, x, y);
    outputMatrix(A, x, y);
    int* result = mainDiagonal(A, x, y);
    outputDiagonal(result, x);
    result = sortMatrix(result, x);
    outputDiagonal(result, x);
    freeMatrix(A, x);

    delete[]result;

    return 0;
}
