#include<iostream>
using namespace std;
// int getithbit(int n,int i)
// {
//     int mask=1<<i;
//     return (n&mask)?1:0;
// }
int clear(int &n,int i)
{
    int mask=~(1<<i);
    return (n&mask);
}
// void setithbit(int &n,int i)
// {
//             int mask=1<<i;
//               int ans=   (n|mask);
//               n=ans;
// }
int updateithbit(int n,int i,int val)
{
    clear(n,i);
    int mask=val<<i;
    return n|mask;

}
int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;
    int val;
    cin>>val;
   // cout<<getithbit(n,i);
    //cout<<clear(n,i);
    //setithbit(n,i);
    cout<<updateithbit(n,i,val);

}