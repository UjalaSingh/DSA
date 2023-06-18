#include<iostream>
using namespace std;
void clear(int n,int i)
{
   int mask=1<<i-1;
   int neg=~mask;
   cout<<(n & neg);
}
int main()
{
    int n;
    cin>>n;
   int i;
   cin>>i;
   clear(n,i);
}