#include <iostream>
using namespace std;
int main() {
    const int rows = 3;
    const int cols = 3;
    int matrix[rows][cols];

    cout << "Enter 9 numbers for the 3x3 matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "Row sums:" << endl;
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << " sum: " << rowSum << endl;
    }

    cout << "Column sums:" << endl;
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j + 1 << " sum: " << colSum << endl;
    }

    return 0;
}
