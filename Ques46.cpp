#include <iostream>
using namespace std;
int main() {
    const int size = 10;
    int arr[size];

    cout << "Enter 10 numbers into the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                arr[j] = -1;
            }
        }
    }

    cout << "Array with duplicates replaced by -1:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
