#include<bits/stdc++.h>
using namespace std;
void maxsubarray(int a[],int n)
{
    int sum=0,maxsum=INT_MIN;
    int ansstart=-1,ansend=-1,start=0;
    for(int i=0;i<n;i++)
    {
            sum+=a[i];
            if(sum<0)
            start=i;
            if(sum>maxsum)
            {
                maxsum=sum;
                ansstart=start;
                ansend=i;
            }
            if(sum<0)
            sum=0;
    }
    for(int i=ansstart;i<=ansend;i++)
    {
        cout<<a[i]<<" ";
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
    maxsubarray(a,n);
}