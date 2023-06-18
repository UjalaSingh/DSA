#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        int k=1,q=i-1;
        while(j<=2*n-1)
        {
            if(j>=n+1-i&&j<=n+i-1)
            {
                if(j<=n)
                {
                    
                    cout<<k;
                    k++;
                }
                else
                {
                    cout<<q;
                    q--;
                }
            }
            else
            {
                cout<<" ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
}