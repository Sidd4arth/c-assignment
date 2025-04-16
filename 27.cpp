#include<iostream>
using namespace std;
int fib(int n)
{
    int a=0, b=1, next;
    cout<<"Fibonacci series";
    for(int i=0; i<=n; i++)
    {
        cout<<a<<" ";
        next=a+b;
        a=b;
        b=next;
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter limit:";
    cin>>n;
    fib(n);
    return 0;
}