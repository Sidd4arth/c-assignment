
#include <iostream>
using namespace std;
int main() {
    int i, oddsum=0;
    int n;
    cout<<"enter limit: ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2!=0){
            oddsum=oddsum+i;
        }
    }
     cout<<oddsum;
    return 0;
}