//sum of all nos which are diviible by 3
#include<iostream>
using namespace std;
int main()
{
    int n, sumofdivisor=0;
    cout<<"Enter a limit:";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i%3==0)
        {
            sumofdivisor+=i;
        }
        
    }
    cout<<sumofdivisor;
    return 0;
}
