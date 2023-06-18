#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        right=NULL;
    }
};
node *build(node *root)
{
    int data;
    cin>>data;
    if(data==-1)
    return NULL;
    root=new node(data);
    cout<<root->data;
    root->left=build(root->left);
    root->right=build(root->right);
    return root;
}
void printprorder(node *root)
{
    if(root==NULL)
    return ;
    cout<<root->data<<" ";
    printprorder(root->left);
    printprorder(root->right);
}
int main()
{
        node *root=NULL;
        root=build(root);
        printprorder(root);

}