#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* right;
    Node* left;
    Node(int x)
    {
        data=x;
        right = left = NULL;
    }
};

bool find(Node*root,int x)
{
    if (root==NULL)
    return 0;
    if (root->data == x)
    return true;
    else if (root->data<x)
    find (root->right,x);
    else find(root->left,x);
}

bool findlp(Node*root, int x)
{
    Node*curr=root;
    while (curr!=NULL)
    {
        if(curr->data==x)
        return true;
        else if (x<curr->data)
        curr=curr->left;
        else curr = curr->right;
    }
    return false;
}

Node* insert(Node*root,int x)
{
    if(root==NULL)
    return new Node(x);
    if (root->data<x)
    root->right=insert(root->right,x);
    else if (root->data>x)
    root->left=insert (root->left,x);
    return root;
    
}
Node*insertlp(Node*root,int x)
{
    Node*temp = new Node (x);
    Node*curr = root;
    Node*parent =NULL;
    while (curr!=NULL)
    {
        parent = curr;
        if (x<curr->data)
        {
            curr=curr->left;
        }
        else if (x>curr->data)
        {
            curr=curr->right;
        }
        else return root;
    }
    if (parent == NULL)
    return temp;
    if (x<parent->data)
    parent->left=temp;
    else parent->right=temp;
    return root;
}

int main()
{
    Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);
    cout<< find (root,3);
    cout<< endl;
    cout<< findlp (root,66);
    cout<< endl;
    root = insert (root,4);
    root = insertlp(root,24);

}
















