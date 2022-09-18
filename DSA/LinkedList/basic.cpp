#include<iostream>
using namespace std;
struct node {
	int data;
	node*next;
	node(int x)
	{
		data = x;
		next= NULL;
	}
	
};
void print(node *head)
{
	node *curr = head;
	while (curr != NULL)
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}
node *insert(node *head,int x)
{
	node *temp= new node(x);
	temp->next=head;
	return temp;
}
int main()
{
	node*link=new node(5);
	link->next= new node (6);
	link->next->next=new node (7);
	link->next->next->next=new node (8);
	link = insert(link,1);
	print(link);

	
	
}