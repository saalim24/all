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
    if (head==NULL) {
        temp->next=temp;
    return temp;}
    else{
    
    node*curr=head;
    while (curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    return head;}

    
}

node*deletehead(node*head)
{
    if (head==NULL)return NULL;
    else if(head->next==head)
    {
        delete head;
        return NULL;
    }
    else {
        head->data=head->next->data;
        node*temp=head->next;
        head->next=head->next->next;
        delete temp;
        return head;
    }
}

int main()
{
    node* linked=new node(10);
    linked->next=new node(20);
    linked->next->next=new node(30);
    linked->next->prev= linked;
    linked->next->next->prev= linked->next;
    linked=insert(linked,40);
    linked = deletehead(linked);
    display(linked);

}