#include <iostream>
using namespace std;
int findHighestDigit(int number) {
    int highestDigit = -1;  
    if (number < 0)
        number = -number;
    
    while (number > 0) {
        int digit = number % 10;  
        if (digit > highestDigit) {
            highestDigit = digit;  
        }
        number /= 10;  
    }
    
    return highestDigit;
}

int main() {
    int number;
   cout << "Enter a number: ";
   cin >> number;
    
    int highest = findHighestDigit(number);
    
    if (highest == -1) {
       cout << "Invalid input or the number has no digits." <<endl;
    } else {
       cout << "The highest digit in the number is: " << highest <<endl;
    }
    
    return 0;
}
