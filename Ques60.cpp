#include <iostream>
using namespace std;
bool is_prime(int num) {
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0)
            return false;
    }

    return true;
}

void find_twin_primes(int start, int end) {
    if (start < 3) {
        start = 3;
    }

    cout << "Twin prime numbers between " << start << " and " << end << " are:\n";

    for (int i = start; i <= end - 2; i++) {
        if (is_prime(i) && is_prime(i + 2)) {
            cout << "(" << i << ", " << i + 2 << ")\n";
        }
    }
}

int main() {
    int start, end;

    cout << "Enter the range (start and end): ";
    cin >> start >> end;

    if (start >= end || start < 0 || end < 0) {
        cout << "Invalid input range.\n";
    } else {
        find_twin_primes(start, end);
    }

    return 0;
}

