#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
vector<int> remove(int a[],int size)
{
    vector<int> out;
         unordered_map <int ,bool> seen;
         for(int i=0;i<size;i++)
         {
            if(seen.count(a[i])>0)
            {
                continue;
            }
            seen[a[i]]=true;
            out.push_back(a[i]);
         }
 return out;
}
int main()
{
      int a[]={1,2,34,1,2,3,4,5,6,3,22,33};
      vector<int> output=remove(a,12);
      for(int i=0;i<output.size();i++)
      cout<<output[i]<<"  ";

}