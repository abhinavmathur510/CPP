#include <iostream>
using namespace std;
int countDigits(int number) {
    int count = 0;

    if (number == 0) {
        return 1;
    }

    if (number < 0) {
        number = -number;
    }

    while (number != 0) {
        number /= 10;  
        count++;
    }

    return count;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int digitCount = countDigits(num);

    cout << "Number of digits: " << digitCount << endl;

    return 0;
}
