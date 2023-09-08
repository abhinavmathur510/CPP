#include <iostream>
#include <climits> 
using namespace std;

int main() {
    const int size = 10;
    int arr[size];

    cout << "Enter " << size << " numbers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int highest = INT_MIN;
    int secondHighest = INT_MIN;
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > highest) {
            secondHighest = highest;
            highest = arr[i];
        } else if (arr[i] > secondHighest && arr[i] != highest) {
            secondHighest = arr[i];
        }

        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    cout << "Highest: " << highest << endl;
    cout << "Second Highest: " << secondHighest << endl;
    cout << "Smallest: " << smallest << endl;
    cout << "Second Smallest: " << secondSmallest << endl;

 return 0;
}
