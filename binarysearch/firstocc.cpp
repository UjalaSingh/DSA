#include <iostream>
using namespace std;
int firstocc(int a[], int n, int x)
{
    int start = 0, end = n - 1, ans = -1;
    while (start <= end) 
    {
        int mid = (start + end) / 2;
        if (a[mid] == x)
        {
            ans = mid;
            end=mid-1;

        }
        else if (a[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int lastocc(int a[], int n, int x)
{
    int start = 0, end = n - 1, ans = -1;
    while (start <= end) 
    {
        int mid = (start + end) / 2;
        if (a[mid] == x)
        {
            ans = mid;
        start=mid+1;

        }
        else if (a[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
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
    int f=firstocc(a, n, x);
    int l=lastocc(a,n,x);
    int ans=l-f+1;
    cout<<ans;
} 