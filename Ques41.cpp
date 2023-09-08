#include <iostream>
using namespace std;

int main() {
    const int arraySize = 10;
    int numbers[arraySize];

    for (int i = 0; i < arraySize; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    int lastOdd = -1; 
    for (int i = arraySize - 1; i >= 0; --i) {
        if (numbers[i] % 2 != 0) {
            lastOdd = numbers[i];
            break;  
        }
    }

    if (lastOdd != -1) {
        cout << "The last odd number in the array is: " << lastOdd << endl;
    } else {
        cout << "No odd numbers were found in the array." << endl;
    }

    return 0;
}
