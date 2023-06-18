#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
       n= n>>1;
    }
    if(n==0)
    cout<<"yes";
    else
    cout<<"no";
    }