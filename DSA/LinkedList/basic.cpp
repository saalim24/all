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
node *insert(node *head,int x)// beginning insert
{
	node *temp= new node(x);
	temp->next=head;
	return temp;
}

node*linsert(node*head,int x) //last insert
{
	node* temp=head;
	if (head==NULL) return 0;
	while (temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next= new node(x);
	return head;
}

// node*del(node*head) //deletes first node           //works but doesn't delete head on stack
// {
// 	if (head==NULL) return NULL;                      //better in Java
// 	return head->next;
// }
node*del(node*head) //deletes first node
{
	if (head==NULL) return NULL;
	node*temp= head->next;
	delete head;
	return temp;
}

node*ldel(node*head)
{
	if (head==NULL)
	return NULL;
	if (head->next==NULL)
	return NULL;
	node*temp = head;
	while (temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	delete temp->next;
	temp->next=NULL;
	
	return head;
}


int main()
{
	node*link=new node(5); // created object
	link->next= new node (6);
	link->next->next=new node (7);
	link->next->next->next=new node (8);
	link = insert(link,1); // insert at beginning function used
	link= linsert(link,5);// insert at end function used;
	link=del(link);//deletes first element that is 1
	link=ldel(link);
	print(link); // print function used
}