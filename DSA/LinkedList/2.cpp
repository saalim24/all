#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
    node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL; 
    }
};

node*display(node*head)
{
    node*curr=head;
    while (curr->next!=NULL)
    {
        cout<< curr->data<<endl;
        curr=curr->next;
    }
    cout<<curr->data<<endl;

}

node*insert(node*head,int data)
{
    node*temp=new node(data);
    if (head==NULL) 
    return temp;
    
    node*curr=head;
    while (curr->next!=NULL)
    {
        curr=curr->next;
    }
    node*temp= new node(data);
    curr->next=temp;
    temp->prev=curr;
    return head;

    
}
int main()
{
    node* linked=new node(10);
    linked->next=new node(20);
    linked->next->next=new node(30);
    linked->next->prev= linked;
    linked->next->next->prev= linked->next;
    linked=insert(linked,40);
    display(linked);

}