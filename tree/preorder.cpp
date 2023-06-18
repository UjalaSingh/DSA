#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data=d;
        left=right=NULL;
    }
};
node  *bulidtree()
{
      int data;
      cin>>data;
      if(data==-1)
      return NULL;
      node *root=new node(data);
      root->left=bulidtree();
      root->right=bulidtree();
      return root;
}
void print(node *root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main()
{
       node *t=bulidtree();
       print(t);

}