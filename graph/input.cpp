// #include<iostream>
// using nbamespace std;
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     int a[n+1][m+1];
//     for(int i=0;i<m;i++)
//     {
//         int u,v;
//         cin>>u>>v;
//         a[u][v]=1;
//         a[v][u]=1;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>  a[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        a[u].push_back(v,w);
       // a[v][u]=1;
    }
    for(int i=0;i<m;i++)
    {
        cout<<a
    }
}