#include <iostream>
using namespace std;
// int getithbit(int n, int i)
// {
//     int s = 1 << i;

//     return (s & n) > 0 ? 1 : 0;
// }
// int setithbit(int n, int i)
// {
//     int mask = 1 << i;
//     n=n|mask;
//     return n;
// }
int clearithbit(int n, int i)
{
   int mask=~(1<<i);
   n=n&mask;
   return n;
}
int main()
{
    int n;
    cin >> n;
    int i;
    cin >> i;
    // cout << getithbit(n, i) << endl;
    // cout<<setithbit(n,i)<<endl;
    cout<<clearithbit(n,i)<<endl;
}
