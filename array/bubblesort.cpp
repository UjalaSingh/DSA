#include <bits/stdc++.h>
using namespace std;
void bubblesort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool m=false;
        for (int j = 0; j < n; j++)
        {
            if (a[i] < a[j] && i != j)
            {
              m=true;
                swap(a[i], a[j]);
            }
        }
        if(m==false)
        break;

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
    bubblesort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}