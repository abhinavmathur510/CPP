#include <iostream>
using namespace std;
bool isPerfect(int num) {
    if (num <= 1) {
        return false;
    }

    int sum = 1; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }

    return sum == num;
}

void printPerfectNumbers(int arr[], int size) {
    cout << "Perfect numbers in the array: ";
    for (int i = 0; i < size; i++) {
        if (isPerfect(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {6, 28, 12, 496, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    printPerfectNumbers(arr, size);

    return 0;
}
