#include<iostream>
using namespace std;
bool check(int n ,int i )
{
   

    int mask=n>>i-1;
    cout<<mask<<" ";
    if(mask&1)
    return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;
    if(check(n,i))
    cout<<"yes";
    else
    cout<<"no";
}