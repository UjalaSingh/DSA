#include<iostream>
using namespace std;
bool staircase(int **a,int n,int m,int x)
{
    if(a[0][0]<x||a[n-1][m-1]>x)
    return false;
          int left=m-1,right=0;
           for(int i=m-1;i>=0;)
           {
            if(a[left][right]==x)
            {
                return true;
            }
            else if(a[left][right]>x)
            {
                left--;
                i--;
            }
            else
            {
                right++;
            }

                 
           }   
           return false; 
}
int main()
{
    int n,m;
    cin>>n>>m;
    int **a=new int*[n];
    
    for(int i=0;i<n;i++)
    {
        a[i]=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;
    bool ans=staircase(a,n,m,x);
    if(ans)
      cout<<"true";
      else
      cout<<"false";   
    for(int i=0;i<n;i++)
    {
        delete [] a[i];
    }
    delete [] a;

}