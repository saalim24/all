#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

void print (node*head)
{
    node*temp=head;
    if (head==NULL)return;
    do {
        cout<<temp->data;
        temp=temp->next;
    }
    while (temp!=head);
    
}

node*insertatbegin(node*head,int data)
{
    node*temp=new node(data);
    if (head==NULL){
    temp->next=temp;
    return temp;}

    temp->next=head->next;
    head->next=temp;

    int t =head->data;
    head->data=temp->data;
    temp->data=t;
    return head;
}

int main()
{
    node*circ=new node(1);
    circ->next= new node(2);
    circ->next->next=new node (3);
    circ->next->next->next=circ;

    circ=insertatbegin(circ,0);
    print(circ);
    
}