#include <bits/stdc++.h>
#include <stack>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        right = NULL;
    }
};
node *build()
{
    int data;
    cin >> data;
    node *root = new node(data);
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *current = q.front();
        q.pop();
        int ld, rd;
        cin >> ld >> rd;
        if (ld != -1)
        {
            current->left = new node(ld);
            q.push(current->left);
        }
        if (rd != -1)
        {
            current->right = new node(rd);
            q.push(current->right);
        }
    }
    return root;

}
vector<int> preorder(node *root)
{
    vector <int> p;
   if(root==NULL)
   return p;
   stack<node *> s;
   s.push(root);
   while(!s.empty())
   {
        root=s.top();
        s.pop();
        p.push_back(root->data);
        if(root->right!=NULL)
        {
            s.push(root->right);
        }
         if(root->left!=NULL)
        {
            s.push(root->left);
        }

   }
   return p;

}
 
int main()
{
    node *root = build();
     vector<int> ans= preorder(root);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";

}