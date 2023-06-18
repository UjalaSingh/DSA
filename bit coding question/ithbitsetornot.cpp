#include<iostream>
using namespace std;
void check(int n,int i)
{
    int mask=1<<(i-1);
    if(n& mask)
    cout<<"set";
    else
    cout<<"not set";
}
int main()
{
    int n;
    cin>>n;
   int i;
   cin>>i;
   check(n,i);
}