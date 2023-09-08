#include <iostream>
using namespace std;
int main() {
    int matrix[3][3];
    
    cout << "Enter 9 numbers for the matrix (3x3):" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }

    int targetSum;
    cout << "Enter the target sum: ";
    cin >> targetSum;

    bool found = false;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int x = i; x < 3; ++x) {
                for (int y = (x == i) ? j + 1 : 0; y < 3; ++y) {
                    if (matrix[i][j] + matrix[x][y] == targetSum) {
                        cout << "Pair found: (" << matrix[i][j] << ", " << matrix[x][y] << ")" << endl;
                        found = true;
                    }
                }
            }
        }
    }

    if (!found) {
        cout << "No pairs found with the target sum." << endl;
    }

    return 0;
}
