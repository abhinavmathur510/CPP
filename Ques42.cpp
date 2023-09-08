#include <iostream>
using namespace std;
int main() {
    const int arraySize = 10;
    int numbers[arraySize];

    cout << "Enter 10 numbers:\n";
    for (int i = 0; i < arraySize; ++i) {
        cin >> numbers[i];
    }

    cout << "3-digit numbers in the array are:\n";
    for (int i = 0; i < arraySize; ++i) {
        if (numbers[i] >= 100 && numbers[i] <= 999) {
            cout << numbers[i] << " ";
        }
    }

    cout << endl;
    
    return 0;
}
