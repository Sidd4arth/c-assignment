#include <iostream>
using namespace std;

void digisum(int n)
{
    int digitsum = 0, lastdigit, num = n;
    while (num > 0)
    {
        lastdigit = num % 10;
        num /= 10;
        digitsum += lastdigit;
    }
    cout << "Digit sum is: " << digitsum;
}

int main()
{   
    int n;
    cout << "Enter number to calculate digits total: ";
    cin >> n;
    digisum(n);
    cout << endl;
    return 0;
}
