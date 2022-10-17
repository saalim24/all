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

Node*succs(Node*root)
{
    root=root->right;
    while (root&&root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}

Node*del(Node*root,int x)
{
    if (root==NULL)
    return root;
    else if (root->data>x)
    root->left=del(root->left,x);
    else if (root->data<x)
    root->right=del(root->right,x);
    else {
        if (root->left==NULL)
        {
            Node*temp=root->right;
            delete root;
            return temp;
        }
        else if (root->right==NULL)
        {
            Node*temp=root->left;
            delete root;
            return temp;
        }
        else{
            Node*succ= succs(root);
            root->data=succ->data;
            root->right=del(root->right,succ->data);
        }
    }


}

Node*floor(Node*root,int key)
{
    Node*res=root;
    while (root)
    {
        if (root->data==key)
        return root;
        else if (root->data>key)
        {
            root= root->left;
        }
        else 
        {
            res=root;
            root=root->right;
        }

    }
    return res;
}
Node*ceil(Node*root,int key)
{
    Node*res=NULL;
    while (root!=NULL)
    {
    if (root->data==key)
    return root;
    else if (root->data<key)
    {
        root=root->right;
    }
    else {
        res = root;
        root=root->left;
    }
    }
    return res;

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
    root= del(root,4);
    


}
















