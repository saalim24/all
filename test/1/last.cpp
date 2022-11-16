#include<iostream>
using namespace std;

int main()
{
    int i,n,elem;
    cout<< "enter size ";
    cin>> n;
    int arr[n+1];
    cout<< "enter "<< n << " elements";
    for (i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    cout<< "enter last element ";
    cin>> elem;
    arr[i]= elem;

    cout<< "the new array is ";
    for (int i=0;i<n+1;i++)
    {
        cout<< arr[i] << " ";
    }



}




///////////////////
#include <bits/stdc++.h>
using namespace std;

struct MyStack{
    int *arr;
    int cap;
    int top;
    MyStack(int c){
        cap=c;
        arr=new int [cap];
        top=-1;
    }
    
    void push(int x){
        if(top==cap-1){cout<<"Stack is full"<<endl;return;}
        top++;
        arr[top]=x;
    }
    
    int pop(){
        if(top==-1){cout<<"Stack is Empty"<<endl;return INT_MIN;}
        int res=arr[top];
        top--;
        return res;
    }
    
    int peek(){
        if(top==-1){cout<<"Stack is Empty"<<endl;return INT_MIN;}
        return arr[top];
    }
    
    int size(){
        return (top+1);
    }
    
    bool isEmpty(){
        return top==-1;
    }
};

int main()
{
    MyStack s(5);
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
  
    return 0; 
}





#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

struct MyStack{
    Node *head;
    int sz;
    MyStack(){
        head=NULL;
        sz=0;
    }
    
    void push(int x){
        Node *temp=new Node(x);
        temp->next=head;
        head=temp;
        sz++;
    }
    
    int pop(){
        if(head==NULL){cout<<"Stack is Empty"<<endl;return INT_MAX;}
        int res=head->data;
        Node *temp=head;
        head=head->next;
        delete(temp);
        sz--;
        return res;
    }
    
    int peek(){
        if(head==NULL){cout<<"Stack is Empty"<<endl;return INT_MAX;}
        return head->data;
    }
    
    int size(){
        return sz;
    }
    
    bool isEmpty(){
        return head==NULL;
    }
};

int main()
{
    MyStack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
  
    return 0; 
}






