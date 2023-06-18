#include<bits/stdc++.h>
using namespace std;
int floor (int a[], int n, int x)
{
    int s=0,e=n-1,ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==x)
        return mid;
        else if(a[mid]<x)
        {
            ans=mid;
            s=mid+1;
        }
        else 
        e=mid-1;
    }
    return ans;
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
    int x;
    cin>>x;
    int f=floor(a,n,x);
    cout<<f;
}