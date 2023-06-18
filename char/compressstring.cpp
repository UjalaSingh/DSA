#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string ans;
    for(int i=0;s[i]!='\0';i++)
    {
        int rep=1;
       
       while (s[i]!='\0'&&s[i]==s[i+1])
       {
         rep++;
         i++;
       }
      ans+=s[i];
      ans+=to_string(rep);

    }
   if(ans.length()>s.length())
    cout<<s;
    else
    cout<<ans;
}