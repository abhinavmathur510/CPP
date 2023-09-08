#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

void printFactorialsOfDigits(int number) {
    while (number != 0) {
        int digit = number % 10; 
        int fact = factorial(digit);  
        cout << "Factorial of " << digit << " is " << fact << endl;
        number /= 10;  
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    printFactorialsOfDigits(num);

    return 0;
}
