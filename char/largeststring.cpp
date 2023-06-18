#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.get();
    int max = 0;
    int i = 0;
    string ans;
    while (i < n)
    {
        char a[100];

        cin.getline(a, 100);
        int count = 0;
        // for (int i = 0; a[i] != '\0'; i++)
        // {
        //     count++;
        // }
        count=strlen(a);
        if (count > max)
        {
            ans = a;
            max = count;
        }
        i++;
    }
    cout << ans;
    
}