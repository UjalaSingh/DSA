#include <iostream>
using namespace std;
int main()
{
     int n;
    cin >> n;
    int k=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i <= n / 2 + 1)
            {
                if (j >= n/2 + 2- i && j <= n/2+ i )
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
              
                if (j >= k && j <=n-k+1)
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
