#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reverseNum = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reverseNum = reverseNum * 10 + remainder;
        num /= 10;
    }

   
    if (originalNum == reverseNum) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}
