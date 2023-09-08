#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    const int size = 10;
    int arr[size];

    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int smallestPrime = -1; 
    for (int i = 0; i < size; ++i) {
        if (isPrime(arr[i])) {
            if (smallestPrime == -1 || arr[i] < smallestPrime) {
                smallestPrime = arr[i];
            }
        }
    }

    if (smallestPrime == -1) {
        cout << "No prime numbers found in the array.\n";
    } else {
        int count = 0;
        for (int i = 0; i < size; ++i) {
            if (arr[i] < smallestPrime) {
                count++;
            }
        }
        cout << "Count of numbers less than the smallest prime number (" << smallestPrime << "): " << count << "\n";
    }

    return 0;
}
