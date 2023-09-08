#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int matrix[3][3];
    int primeSum = 0;

    cout << "Enter 9 numbers into a 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (isPrime(matrix[i][j])) {
                primeSum += matrix[i][j];
            }
        }
    }

    cout << "Sum of prime numbers in the matrix: " << primeSum << endl;

    return 0;
}
