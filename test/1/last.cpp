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










#include <bits/stdc++.h> 
using namespace std; 

 
class Queue { 
public: 
	int front, rear, size; 
	unsigned capacity; 
	int* array; 
}; 

 
Queue* createQueue(unsigned capacity) 
{ 
	Queue* queue = new Queue(); 
	queue->capacity = capacity; 
	queue->front = queue->size = 0; 

	 
	queue->rear = capacity - 1; 
	queue->array = new int[( 
		queue->capacity * sizeof(int))]; 
	return queue; 
} 

 
int isFull(Queue* queue) 
{ 
	return (queue->size == queue->capacity); 
} 


int isEmpty(Queue* queue) 
{ 
	return (queue->size == 0); 
} 


void enqueue(Queue* queue, int item) 
{ 
	if (isFull(queue)) 
		return; 
	queue->rear = (queue->rear + 1) 
				% queue->capacity; 
	queue->array[queue->rear] = item; 
	queue->size = queue->size + 1; 
	cout << item << " enqueued to queue\n"; 
} 

 
int dequeue(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	int item = queue->array[queue->front]; 
	queue->front = (queue->front + 1) 
				% queue->capacity; 
	queue->size = queue->size - 1; 
	return item; 
} 


int front(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	return queue->array[queue->front]; 
} 

 
int rear(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	return queue->array[queue->rear]; 
} 

 
int main() 
{ 
	Queue* queue = createQueue(1000); 

	enqueue(queue, 10); 
	enqueue(queue, 20); 
	enqueue(queue, 30); 
	enqueue(queue, 40); 

	cout << dequeue(queue) 
		<< " dequeued from queue\n"; 

	cout << "Front item is "
		<< front(queue) << endl; 
	cout << "Rear item is "
		<< rear(queue) << endl; 

	return 0; 
} 










#include <bits/stdc++.h> 
using namespace std; 

struct QNode { 
	int data; 
	QNode* next; 
	QNode(int d) 
	{ 
		data = d; 
		next = NULL; 
	} 
}; 

struct Queue { 
	QNode *front, *rear; 
	Queue() 
	{ 
		front = rear = NULL; 
	} 

	void enQueue(int x) 
	{ 

		 
		QNode* temp = new QNode(x); 

		 
		if (rear == NULL) { 
			front = rear = temp; 
			return; 
		} 

		 
		rear->next = temp; 
		rear = temp; 
	} 

	 
	void deQueue() 
	{ 
		 
		if (front == NULL) 
			return; 

	 
		QNode* temp = front; 
		front = front->next; 

	
		if (front == NULL) 
			rear = NULL; 

		delete (temp); 
	} 
}; 


int main() 
{ 

	Queue q; 
	q.enQueue(10); 
	q.enQueue(20); 
	q.deQueue(); 
	q.deQueue(); 
	q.enQueue(30); 
	q.enQueue(40); 
	q.enQueue(50); 
	q.deQueue(); 
	cout << "Queue Front : " << (q.front)->data << endl; 
	cout << "Queue Rear : " << (q.rear)->data; 
} 











