#include<iostream>
using namespace std;
int power(int x,int y)
{
    if (x==0)
    return 0;
    if(y==0)
    return 1;
    int ans=power(x,y/2);
    return x*ans;
    
}
int main()
{
    int x,y;
    cin>>x>>y;
    int ans=power(x,y);
    if(y%2==0)
    {
        cout<<ans*ans;
    }
    else
    {
        cout<<ans*ans*x;
    }
    cout<<endl;
    cout<<(ans*ans)%7;

}