#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input for the number of elements." << endl;
        return 1;
    }

    int arr[n];

    cout << "Enter " << n << " numbers into the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    int maxElement = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    int freq[maxElement + 1] = {0};

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxFrequency = -1;
    int mostFrequentNumber = -1;

    for (int i = 0; i <= maxElement; i++) {
        if (freq[i] > maxFrequency) {
            maxFrequency = freq[i];
            mostFrequentNumber = i;
        }
    }

    cout << "The number with the highest frequency is: " << mostFrequentNumber << endl;
    cout << "It occurs " << maxFrequency << " times in the array." << endl;

    return 0;
}
