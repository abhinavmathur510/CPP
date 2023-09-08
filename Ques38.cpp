#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    const int arraySize = 10;
    int numbers[arraySize];

   
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < arraySize; i++) {
        cin >> numbers[i];
    }

    int primeCount = 0;

   
    for (int i = 0; i < arraySize; i++) {
        if (isPrime(numbers[i])) {
            primeCount++;
        }
    }

    cout << "Count of prime numbers in the array: " << primeCount << endl;

    return 0;
}
