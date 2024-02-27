#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 5;
    vector<vector<double>> matrix(ROWS, vector<double>(COLS));

   
    cout << "Введите элементы двумерного массива (3x5):\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << "Введите элемент [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }


    cout << "Средние арифметические для каждой строки:\n";
    for (int i = 0; i < ROWS; ++i) {
        double sum = 0.0;
        for (int j = 0; j < COLS; ++j) {
            sum += matrix[i][j];
        }
        double average = sum / COLS;
        cout << "Строка " << i << ": " << average << endl;
    }

    return 0;
}
