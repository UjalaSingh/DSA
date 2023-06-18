#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> ourmap;
    ourmap["asd"] = 1;
    ourmap["cnc"] = 1;
    ourmap["n"] = 7;
    ourmap["ass"] = 1;
    ourmap["asdss"] = 1;
    unordered_map<string, int>::iterator it = ourmap.begin();
    while (it!=ourmap.end())
    {
        cout<<"key:"<<it->first<<"    " <<"value : "<<it->second<<endl;;
        it++;
    }
    //find

    unordered_map<string, int>::iterator it2 = ourmap.find("n");
    cout<<it2->second;
    
}