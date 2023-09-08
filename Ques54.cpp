#include <iostream>
using namespace std;
 long factorial(int n) {
    long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int matrix[3][3];
    
    cout << "Enter 9 numbers for the matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    int maxNumber = matrix[0][0];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matrix[i][j] > maxNumber) {
                maxNumber = matrix[i][j];
            }
        }
    }
    
    long long maxFactorial = factorial(maxNumber);
    cout << "Factorial of the maximum number (" << maxNumber << ") is: " << maxFactorial << endl;
    
    return 0;
}
