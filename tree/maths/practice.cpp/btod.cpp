#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=1,ans=0;
    while(n!=0)
    {
        int bit=n&1;
        ans=ans+bit*p;
        n=n/10;
        p*=2;
    }
    cout<<ans;
}