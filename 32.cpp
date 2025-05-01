#include<iostream>
using namespace std;
int main()
{
    int decnum,rem,pow=1, ans=0;
    cout<<"Enter decimal number to convert into binary:";
    cin>>decnum;
    while(decnum>0)
    {
        rem=decnum%2;
        decnum=decnum/2;
        ans+=(rem*pow);
        pow=pow*10;
    }
    cout<<"binary number :"<<ans;
    return 0;
}