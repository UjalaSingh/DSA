#include <iostream>
#include <vector>
#include "treeclass.h"
#include "node.h"
using namespace std;
void print(treeNode<int> *root)
{
    cout << root->data << ":"
         << " ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << " ,";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        print(root->children[i]);
    }
}
int main()
{
    treeNode<int> *root = new treeNode<int>(1);
    treeNode<int> *n1 = new treeNode<int>(2);
    treeNode<int> *n2 = new treeNode<int>(3);
    treeNode<int> *n9 = new treeNode<int>(24);

    root->children.push_back(n1);
    root->children.push_back(n2);
    n2->children.push_back(n9);
    print(root);
}
