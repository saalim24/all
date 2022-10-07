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
//                   1

//           2                5

//       3       4       6         7

void display(Node*root)
{
    if (root==NULL)return;                    
    cout<< (root->data)<<" ";
    display(root->left);
    display(root->right);
}
void kdis(Node*root,int k)
{
    if (root==NULL)return;
    if (k==0)
    cout<< root->data<<" ";
    kdis(root->left,k-1);
    kdis(root->right,k-1);
}

int height(Node*root)
{
    if (root==NULL)return 0;
    return (1+max(height(root->left),(height(root->right))));
}

void level(Node*root)
{
    if (root==NULL)return;
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node*curr=q.front();
        q.pop();
        cout<< curr->data  <<" ";
        if (curr->left)
        q.push(curr->left);
        if (curr->right)
        q.push(curr->right);
    }

}

void levelspace(Node*root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (q.size() > 1)
    {
        Node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << curr->data;
        if (curr->left)
            q.push(curr->left);
        if (curr->right)
            q.push(curr->right);
    }
}

int size (Node*root)
{
    if (root==NULL)return 0;
    return ((1+size(root->right)+size(root->left)));
}

void printleft(Node*root,int level)
{
    if (root == NULL)
        return;
        static int maxlevel{};
    if (level > maxlevel)
    {
        cout << root->data<<" ";
        maxlevel = level;
    }
    printleft(root->left,level+1);
    printleft(root->right,level+1);
}
void loopleftprint(Node*root)
{
    if (root==NULL)return;
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        int count=q.size();
        for (int i =0;i<count;i++)
        {
            Node*curr=q.front();
            q.pop();
            if (i==0)
            cout<< curr->data << " ";
            if (curr->left)
            q.push(curr->left);
            if (curr->right)
            q.push(curr->right);
        }
    }
}
bool child(Node*root)
{
    if (root==NULL||root->left==NULL&&root->right==NULL)return true;
    int sum = root->data;
    if (root->left!=NULL)
    sum+=root->left->data;
    if  (root->right->data!=NULL)
    sum+=root->right->data;
    return (root->data==sum && child(root->left)&&child (root->right));
}

int balance(Node*root)
{
    if (root==NULL)return 0;
    int lh=balance(root->left);
    if (lh==-1)return -1;
    int rh =balance (root->right);
    if (rh==-1)return -1;
    if(abs (rh-lh)>1)return -1;
    return max(rh,lh)+1;

}

int widht(Node*root)
{
    if (root==NULL)return 0;
    queue<Node*>q;
    q.push(root);
    int res{};
    while (!q.empty())
    {
        int size = q.size();
        res=max(res,size);
        for (int i=0; i<size;i++)
        {
            Node*curr=q.front();
            q.pop();
            if (curr->left)
            q.push(curr->left);
            if (curr->right)
            q.push(curr->right);
        }
    }
    return res;
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
    ////////////////////////////////////////////
    cout<< boolalpha;
    display (tree);
    cout<< endl;
    kdis(tree,2);
    cout<< endl;
    cout<< height(tree);
    cout<<endl;
    level(tree);
    cout<< endl;
    levelspace(tree);
    cout<< endl;
    cout<< size(tree);
    cout<< endl;
    printleft(tree,1);
    cout<< endl;
    loopleftprint(tree);
    cout<< endl;
    cout<< child(tree);
    cout<<endl;
    cout<< balance(tree);
    cout<< endl;
    cout<< widht(tree);




}