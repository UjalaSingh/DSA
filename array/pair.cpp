#include<iostream>
using namespace std;
void pairelement(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            cout<<"("<<a[i]<<","<<a[j]<<")"<<" ";
        }
        cout<<endl;
    }
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
    pairelement(a,n);
}