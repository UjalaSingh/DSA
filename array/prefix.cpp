#include<iostream>
using namespace std;
void prefixsum(int a[],int n)
{
    int prefix[n];
    prefix[0]=a[0];
    for(int i=1;i<n;i++)
    {
         prefix[i]=prefix[i-1]+a[i];
    }
      
      int largestsum=0;
      for(int i=0;i<n;i++)
    {
        int s=0;
        for(int j=i;j<n;j++)
        {
           s=i>0?prefix[j]-prefix[i-1]:prefix[j];
           largestsum=max(s,largestsum);
        }
       
    }
    cout<<largestsum<<" ";
          
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
    prefixsum(a,n);
}