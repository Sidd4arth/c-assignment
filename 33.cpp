#include<iostream>
using namespace std;
int main()
{
    int binum, rem, pow=1, ans=0;
    cout<<"Enter strictly binary number:";
    cin>>binum;
    while(binum>0)
    {
        rem=binum%10;
        ans+=rem*pow;
        binum/=10;
        pow*=2;
    }
    cout<<endl;
    cout<<ans;
}