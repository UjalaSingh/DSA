#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
node *create()
{
    int data;
    cin >> data;
    node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail=newnode;
        }
        cin >> data;
    }
    return head;
}
void print(node *head)
{
    if(head==NULL)
    return ;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int length(node*head)
{
      if(head==NULL)
      return 0;
      return length(head->next)+1;
}
node *insert(node *head,int i,int val)
{
    node *newnode=new node(val);
    if(i==0)
    {
        newnode->next=head;
        head=newnode;
        return head;
    }
    int count=0;
    node *temp=head;
    while(count<i-1)
    {
            temp=temp->next;
            count++;
    }
    if(temp!=NULL)
    {
        newnode->next=temp->next;
        temp->next=newnode;
    }
    return head;
}
int main()
{
    node *ll = create();
   
    // int l=length(ll);
    // cout<<l;
    int i;
    cin>>i;
    int data;
    cin>>data;
   node *c= insert(ll,i,data);
    print(c);
}