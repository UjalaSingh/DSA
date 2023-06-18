#include<iostream>
using namespace std;
void setithbit(int n,int i)
{
    int mask=1<<(i-1);
   int ans= mask |  n;
   cout<<ans;
}
int main()
{
    int n,i;
    cin>>n>>i;
    setithbit(n,i);
}