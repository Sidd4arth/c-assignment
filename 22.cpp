#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print numbers: (n - i) times
        for (int j = 0; j < n - i; j++) {
            cout << i + 1;
        }

        cout << endl;
    }

    return 0;
}
