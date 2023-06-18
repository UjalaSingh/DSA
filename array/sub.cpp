#include <iostream>
using namespace std;
void printsub(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k < n; k++)
        {
            for (int j = i; j <= k; j++)
            {
                cout << a[j] << " ";
            }
              cout << endl;
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
    printsub(a, n);
}