#include <iostream>
using namespace std;
int main() {
    const int size = 10;
    int numbers[size];
    int searchNumber;

    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Enter a number to search for: ";
    cin >> searchNumber;

    bool found = false;

    cout << "Positions of " << searchNumber << " in the array: ";
    for (int i = 0; i < size; i++) {
        if (numbers[i] == searchNumber) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "Not found in the array.";
    }

    cout << endl;

    return 0;
}
