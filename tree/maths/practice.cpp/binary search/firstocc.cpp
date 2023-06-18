#include<iostream>
using namespace std;
int firstocc(int a[],int n,int x)
{
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==x)
        {
            ans=mid;
            e=mid-1;
        }
        else if(a[mid]>x)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int lastocc(int a[],int n,int x)
{
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==x)
        {
            ans=mid;
            s=mid+1;
        }
        else if(a[mid]>x)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
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
    cout<<lastocc(a,n,x);
}