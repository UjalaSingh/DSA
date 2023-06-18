#include<iostream>
using namespace std;
int binary(int a[],int n,int x)
{
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(a[mid]==x)
        return  mid;
        else if(a[mid]<x)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}int revbinary(int a[],int n,int x)
{
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]==x)
        return  mid;
        else if(a[mid]>x)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
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
    int p=peak(a,n,x);
    int a=binary(a,n,x);
    int b=revbinary(a,n,x);
}