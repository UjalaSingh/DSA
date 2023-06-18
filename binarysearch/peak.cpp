#include<bits/stdc++.h>
using namespace std;
int peak(int a[],int n)
{
    int start=0,end=n-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
             int prev = mid==0 ? INT_MIN : a[mid-1];
             int next = mid==n-1? INT_MIN : a[mid+1];
            if(a[mid]>prev && a[mid]>next)
            {
                return mid;
            }
            else if(a[mid]<next)
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

    cout<<peak(a,n);
}