#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};

void create(int arr[],int n)
{
    struct Node*first = (struct Node*)malloc(sizeof(struct Node));
    first->data=arr[0];
    first->next=NULL;
    struct Node*last=first;

    for (int i=1;i<n;i++)
    {
        struct Node*t= (struct Node*)malloc(sizeof(struct Node));
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}

int main()
{
    struct Node*temp;
}

