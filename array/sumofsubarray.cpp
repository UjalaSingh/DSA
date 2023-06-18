#include<iostream>
using namespace std;
void printsubarray(int a[],int n)
{
    int max=0;
    for(int start=0;start<n;start++)
    {
      
        for(int end=start;end<n;end++)
        {
            int s=0;
            for(int k=start;k<=end;k++)
            {
               s+=a[k];
            }
            cout<<s;
            if(s>max)
            max=s;
            cout<<endl;
        }
        
       
    }
    cout<<"max :"<<max;
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
    printsubarray(a,n);
}