#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=1;
    int ans=0;
    while(n!=0)
    {
        int bit=n&1;
        ans=ans+p*bit;
        n=n>>1;
        p*=10;
    }
    cout<<ans;
}