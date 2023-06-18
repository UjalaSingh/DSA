#include <iostream>
#include <stack>
#include<queue>
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
void preorder(node *root)
{
    if(root==NULL)
    return ;
    node *temp=root;
    stack<node *> s;
    s.push(root);
    while(!s.empty())
    {
        cout<<s.top()->data<<" ";
        temp=s.top();
        s.pop();
        if(temp->right)
        s.push(temp->right);
         if(temp->left)
        s.push(temp->left);

    }

}

int main()
{
    node *root = build();
    preorder(root);

    

}