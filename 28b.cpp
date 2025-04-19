#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    if (n == 0) {
        cout << "0";
        return;
    }

    int binary[32]; // array to store binary digits
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // print the binary array in reverse order
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    cout << "Binary representation: ";
    decimalToBinary(num);
    cout << endl;

    return 0;
}
