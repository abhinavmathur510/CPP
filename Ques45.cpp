#include <iostream>
using namespace std;
int main() {
    const int size = 10;
    int inputArray[size];
    bool isUnique[size];

    for (int i = 0; i < size; i++) {
        isUnique[i] = true;
    }

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> inputArray[i];
    }

    for (int i = 0; i < size; i++) {
        if (isUnique[i]) {
            for (int j = i + 1; j < size; j++) {
                if (inputArray[i] == inputArray[j]) {
                    isUnique[i] = false;
                    isUnique[j] = false;
                }
            }
        }
    }

    cout << "Unique numbers: ";
    for (int i = 0; i < size; i++) {
        if (isUnique[i]) {
            cout << inputArray[i] << " ";
        }
    }

    return 0;
}
