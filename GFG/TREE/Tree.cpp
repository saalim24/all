#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void traversal(node *root)
{
    if (root != NULL)
    {
        traversal(root->left);
        cout << root->data << " ";
        traversal(root->right);
    }
}

void kdis(node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
        cout << root->data << " ";
    else
    {
        kdis(root->left, k - 1);
        kdis(root->right, k - 1);
    }
}

void levelorder(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}

void printLevel(node *root) // line by line (with new lines)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (q.size() > 1)
    {
        node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            cout << "\n";
            q.push(NULL);
            continue;
        }
        cout << curr->data << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}

int size(node *root)
{
    if (root == NULL)
        return 0;
    else
        return 1 + size(root->left) + size(root->right);
}

int getmax(node *root)
{
    if (root == NULL)
        return 0;
    else
    {
        return max((root->data), (max(getmax(root->left), getmax(root->right))));
    }
}

int maxlevel = 0;
void printleft(node *root, int level)
{

    if (root == NULL)
        return;
    else
    {

        if (level > maxlevel)
        {
            cout << root->data << " ";
            maxlevel = level;
        }
        printleft(root->left, level + 1);
        printleft(root->right, level + 1);
    }
}

void printleftloop(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int count = q.size(); 
        for (int i = 0; i < count; i++) // do not use q.size() in loop because it will change
        {
            node *curr = q.front();
            q.pop();
            if (i == 0)
                cout << curr->data << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
}

bool child(node *root) // children sum property
{
    if (root==NULL || root->left == NULL && root->right == NULL)
        return true;
    int sum{};
    if (root->right != NULL)
        sum += root->right->data;
    if (root->left != NULL)
        sum += root->left->data;
    return ((root->data == sum )&& child(root->left)&& child(root->right));
}


//check if the tree is balance or not .. In a Balanced Binary Tree for every node, the 
//difference between heights of left subtree and right subtree should not be more than one.
bool balance(node*root)
{
    if (root==NULL)
    return 0;
    int lh= balance(root->left);
    if (lh==-1)return -1;
    int rh=balance(root->right);
    if (rh==-1)return -1;
    if(abs(lh-rh)>=1) return -1;
    else 
    return (max(rh,lh)+1);

}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << boolalpha;
    node *root                = new node(10);
    root->left                = new node(20);
    root->right               = new node(30);
    root->left->left          = new node(40);
    root->left->right         = new node(50);
    root->right->right        = new node(70);
    root->right->right->right = new node(80);
    cout << "            Traversal\n";
    traversal(root);
    cout << endl
         << "=================================================" << endl;
    cout << "            K distance nodes from Root\n";
    kdis(root, 2);
    cout << endl
         << "=================================================" << endl;
    cout << "            Level order\n";
    levelorder(root);
    cout << endl
         << "=================================================" << endl;
    cout << "            Level order with lines\n";
    printLevel(root);
    cout << endl
         << "=================================================" << endl;
    cout << size(root) << " is The Size";
    cout << endl
         << "=================================================" << endl;
    cout << getmax(root) << " is The Max Value";
    cout << endl
         << "=================================================" << endl;
    printleft(root, 1); cout<< " print left view using recursion";
    cout << endl
         << "=================================================" << endl;
    printleftloop(root);cout<< " print left view using loop";
    cout << endl
         << "=================================================" << endl;
    cout << child(root);
    cout << " children sum property" << endl
         << "=================================================" << endl;
    cout << balance(root) << " balanced or not";
    cout << endl
    << "=================================================" << endl;

}