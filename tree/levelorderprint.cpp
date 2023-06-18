#include<iostream>
#include<queue>
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
   
    root->left=build(root->left);
    root->right=build(root->right);
    return root;
}
void levelorderprint(node *root)
{
          queue<node*> q;
          q.push(root);
          q.push(NULL);
          while(!q.empty())
          {
            node *temp=q.front();
            if(temp==NULL)
            {
                cout<<endl;
                q.pop();
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            else{
                q.pop();
                cout<<temp->data<<" ";
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }

          }

}
int main()
{
        node *root=NULL;
        root=build(root);
        levelorderprint(root);

}