#include<iostream>
using namespace std;
int main()
{
    char s[1000];
    cin.getline(s,1000);
    int x=0,y=0;
   
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='S')
        y--;
        else if(s[i]=='N')
        y++;
        else if(s[i]=='W')
        x--;
        else
        x++;
    }
    cout<<"("<<x<<","<<y<<")";
    if(x>=0&&y>=0)
    {
        while(x--)
        cout<<"E";
        while(y--)
        cout<<"N";
    }
    else if(x<=0&&y<=0)
    {
         while(x!=0)
        {cout<<"E";
        x++;
        }
        while(y!=0){
        cout<<"N";
        y++;
        }
    }
}