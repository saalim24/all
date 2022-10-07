#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*right;
    Node*left;
    Node(int x)
    {
        data=x;
        right=left=NULL;
    }
};
void display(Node*root)
{
    if (root==NULL)return;
    cout<< (root->data);
    display(root->left);
    display(root->right);
}






int main()
{
    Node*tree=new Node(1);
    tree->right=new Node(5);
    tree->left=new Node(2);
    tree->left->left=new Node(3);
    tree->left->right=new Node(4);
    tree->right->left=new Node(6);
    tree->right->right=new Node(7);
    display (tree);

}