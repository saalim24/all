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
int main()
{
	node link (5);
	link.next= new node (6);
	link.next->next=new node (7);
	cout<< link.next->data;
	
}