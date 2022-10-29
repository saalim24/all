// A simple C program that traverses and prints the elements of doubly linked list
#include<stdio.h>
struct Node{                 
    int data;
    struct Node* next;
    struct Node* prev;
};

void traverse (struct Node*head)
{
    struct Node*curr=head;
    while (curr->next!=NULL)
    {
        printf("%d ",curr->data);
        curr=curr->next;
    }
    printf("%d \n",curr->data);

}
int main()
{
    struct Node*head=NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
  
    head->data = 1; // assign data in first Node
    head->next = second; // Link first Node with second
  
    second->data = 2; // assign data to second Node
    second->next = third;
  
    third->data = 3; // assign data to third Node
    third->next = NULL;
    traverse(head);

}