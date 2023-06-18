#include <iostream>
using namespace std;
int search(int a[], int n, int x)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
  
        if (a[mid] == x)
            return mid;
             else if (mid>1&&a[mid-1] == x)
            return mid-1;
        else if (mid<n &&a[mid+1] == x)
            return mid+1;
       
        else if (a[mid] >= x)
            end=mid-2;
        else
          start=mid+2;
    }
    return -1;
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
    int x;
    cin >> x;
    cout << search(a, n, x);
}