#include <iostream>
using namespace std;
int main(){
    int matrix[3][3];
    int oddCount = 0;
    int evenCount = 0;

    cout << "Enter 9 numbers for the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matrix[i][j] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }

    cout << "Matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Count of odd numbers: " << oddCount << endl;
    cout << "Count of even numbers: " << evenCount << endl;

    return 0;
}
