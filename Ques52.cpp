#include <iostream>
using namespace std;
int main() {
    int matrix[3][3];

    cout << "Enter 9 numbers for the matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }

    int temp = matrix[0][0];  
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            matrix[i][j] = matrix[i][j + 1];
        }
    }

    for (int i = 0; i < 3; ++i) {
        matrix[i][2] = (i == 0) ? 0 : matrix[i - 1][2];
    }

    matrix[0][0] = temp;

    cout << "Matrix after shifting:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
