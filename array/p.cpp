#include<iostream>
using namespace std;
int sum(int a[],int n)
{
    int ms=0,cs=0;
    for(int i=0;i<n;i++)
    {
        cs+=a[i];
        if(cs<0)
        cs=0;
        if(cs>ms)
        {
            ms=cs;
        }
    }
    return ms;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<sum(a,n);
}