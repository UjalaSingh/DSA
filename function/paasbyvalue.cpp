#include<iostream>
using namespace std;
int fun(int q)
{
    q+=1;
    return q;
}
int ref(int &q)
{
    q+=1;
    return q;
}
int main()
{
    int a;
    cin>>a;
    cout<<"pass:"<<fun(a)<<endl;
    cout<<a<<endl;
    cout<<"ref :"<<ref(a)<<endl;;
    cout<<"after ref"<<a<<" ";
}