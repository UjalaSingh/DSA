#include <bits/stdc++.h>
using namespace std;
void insertionsort(int a[], int n)
{
  
   for(int i=1;i<n;i++)
   {
     int curr=a[i];
         if(a[i]<curr)
         {
            for(int j)
         }
   }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    insertionsort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}