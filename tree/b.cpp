#include<bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int data;
    node *left,*right;
    node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};
node *build()
{
    int data;
    cin>>data;
    node *root=new node(data);
    queue<node *> q;
    q.push(root);
    while(!q.empty())
    {
        node *curr=q.front();
        q.pop();
        int ld,rd;
        cin>>ld>>rd;
        if(ld!=-1)
        {
            curr->left=new node (ld);
            q.push(curr->left);
        }
         if(rd!=-1)
        {
            curr->right=new node (rd);
            q.push(curr->right);
        }
    }
    return root;

}
void print(node *root)
{
    
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node *tem=q.front();
        if(tem==NULL)
        {
            cout<<endl;
            q.pop();
            if(!q.empty())
            {
                  q.push(NULL);
            }
        }
        else
        {
            q.pop();
            cout<<tem->data<<" ";
            if(tem->left)
            q.push(tem->left);
            if(tem->right)
            q.push(tem->right);
        }
    }

}
int main()
{
          node *a=build();
          print(a);

}