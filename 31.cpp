#include <iostream>
#include <string>
using namespace std;
int binaryToDecimal(string binary) {
    int decimal = 0;
    for (char digit : binary) {
        decimal = decimal * 2 + (digit - '0');
    }
    return decimal;
}
int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    int decimal = binaryToDecimal(binary);
    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}
