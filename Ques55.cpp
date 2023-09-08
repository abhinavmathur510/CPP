#include <iostream>
using namespace std;
int main() {
    int matrix1[3][3];
    int matrix2[3][3];
    int result_add[3][3];
    int result_mult[3][3];

    cout << "Enter values for Matrix1 (3x3):\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter values for Matrix2 (3x3):\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result_add[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result_mult[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                result_mult[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Matrix Addition Result:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << result_add[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Matrix Multiplication Result:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << result_mult[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
