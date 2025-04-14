#include <iostream>
using namespace std;

int main() {
    int rows = 4;

    for (int i = 0; i < rows; i++) {
        for (char ch = 'A' + i; ch >= 'A'; ch--) {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}
