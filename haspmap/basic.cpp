#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    unordered_map<string, int> ourmap;
    cout << "size: " << ourmap.size() << endl;
    // insert
    pair<string, int> p("abs", 1);
    ourmap.insert(p);
    ourmap["abd"] = 5;
    // find
    cout << ourmap["abd"] << endl;

    cout << ourmap.at("abd") << endl; // cout<<ourmap.at("mnp")<<endl;//THIS WILL GIVE ERROR THAT terminate called after throwing an instance of 'std::out_of_range' but if we write

    cout << "size: " << ourmap.size() << endl;

    cout << ourmap["mnp"] << endl; // this will insert the key with value 0 if it is not present in hashtable
    cout << "size: " << ourmap.size() << endl;
    // check presence count will always 0,1 beacuse there is no duplicate value in map
    if (ourmap.count("abd") > 0)
        cout << "present";
    else
        cout << "not";

    cout << endl;
    // erase
    ourmap.erase("mnp");
    cout << "size: " << ourmap.size() << endl;
}