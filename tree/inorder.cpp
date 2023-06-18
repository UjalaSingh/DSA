
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
void postprint(node *root)
{
    if(root==NULL)
    return;
   
    postprint(root->left);
     cout<<root->data<<" ";
    postprint(root->right);
}
int main()
{
       node *t=bulidtree();
       postprint(t);

}