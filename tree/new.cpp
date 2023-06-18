#include<iostream>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int count=0,countb=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='1')
        count++;
        if(b[i]=='1')
        countb++;
    }
    cout<<count<<" "<<countb;
}