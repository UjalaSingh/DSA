#include<iostream>
using namespace std;
int main()
{
    char s[100];
    cin.getline(s,100);
    int counta=0,countd=0,count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&&s[i]<='z'||(s[i]>='A'&&s[i]<='Z'))
        counta++;
        else if(s[i]>='0'&&s[i]<='9')
        countd++;
        else
        count++;

    }
    cout<<counta<<" "<<countd<<" "<<count;
}