#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    return b;
    if(b==0)
    return a;
    gcd(a-b,b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int large,small;
    if(a>b)
    {
        large=a;
        small=b;
    }
    else{
        large=b;
        small=a;
    }
    cout<<gcd(large,small);
}