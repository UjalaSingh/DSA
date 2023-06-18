#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n/2+1; j++)
        {
            if (i<=n / 2 + 1)
            {
                if (j <=i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (j <=n/2+2-k)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        if(i>=n/2+1)
        k++;
        cout << endl;
    }
}