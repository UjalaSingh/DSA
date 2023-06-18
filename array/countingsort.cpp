#include <bits/stdc++.h>
using namespace std;
void countingsort(int a[], int n)
{
    int maxelement = a[0];
    int ans;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > maxelement)
        {
            maxelement = a[i];
        }
    }
    int countarray[maxelement] = {0};

    for (int i = 0; i < n; i++)
    {

        countarray[a[i]] += 1;
    }
    a[n] = {0};
    int k = 0;
    for (int i = 0; i < n;)
    {
        if (countarray[k] != 0)
        {
            a[i] = k;
            i++;
            countarray[k] -= 1;
        }
        else
        {
            k++;
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
    countingsort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}