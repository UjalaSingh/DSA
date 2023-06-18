#include <iostream>
#include <queue>
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
void levelorderprint(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        if (temp == NULL)
        {
            cout << endl;
            q.pop();
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            q.pop();
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
//   int sum(node *root)
//     {
//         if(root==NULL)
//         return 0;
//         return sum(root->left)+sum(root->right)+root->data;
//     }
int main()
{
    node *root = build();
    //  int aans=sum(root);

     levelorderprint(root);

}