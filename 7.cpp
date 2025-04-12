//factorial of n no.
#include<iostream>
using namespace std;
int main()
{
    int n, fact=1;
    cout<<"Enter a number to find its factorial:";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        fact*=i;
    }
    cout<<fact;

}