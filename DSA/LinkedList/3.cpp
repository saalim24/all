#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;

    node(int x)
    {
        data=x;
        next=NULL;
    }
};

void dis(node*head)
{
    node*curr=head;
    while (curr->next!=NULL)
    {
        cout<< curr->data<<endl;
        curr=curr->next;
    }
    cout<<curr->data<<endl;

}

void middle(node*head)
{
    if (head==NULL)return;
    node*slow=head;
    node*fast=head;
    while (fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow = slow->next;
    }
    cout<<(slow->data);
   
}

node*reverse(node*head)
{
    node*curr=head;
    node*prev=NULL;
    while (curr!=NULL)
    {
        node*next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

node*recrev(node*curr,node*prev)
{
    if (curr==NULL)return prev;
    node*next=curr->next;
    curr->next=prev;
    recrev(next,curr);
}

int main()
{
    node* linked=new node(5);
    linked->next=new node(6);
    linked->next->next=new node(7);
    linked->next->next->next=new node(8);
    linked->next->next->next->next=new node(9);
    linked->next->next->next->next->next=new node(10);
    linked=reverse(linked);
    linked=recrev(linked,NULL);
    dis(linked);

    
}
