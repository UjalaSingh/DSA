#include <iostream>
#include "classnode.h"

using namespace std;
int main()
{
    treeNode<int> *root = new treeNode<int>(1);
    treeNode<int> *n1 = new treeNode<int>(2);
    treeNode<int> *n2 = new treeNode<int>(3);
    root->children.push_back(n1);
    root->children.push_back(n2);
}
