#include <iostream>
using namespace std;

int main() {
    int n = 6;

    for(int i = 0; i < n; i++) { // outer
        char ch = 'A';
        for(int j = 0; j < n; j++) { // inner start => line start
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }

    return 0;
}
