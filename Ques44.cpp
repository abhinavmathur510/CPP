#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int numbers[size];
    
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }
    
    int numberToCount;
    cout << "Enter a number to count its occurrences: ";
    cin >> numberToCount;
    
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (numbers[i] == numberToCount) {
            count++;
        }
    }
    
    cout << "The number " << numberToCount << " occurs " << count << " times in the array." << endl;
    
    return 0;
}
