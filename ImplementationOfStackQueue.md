# DSA-Preparation
problems


// implementation of stack using array

#include <iostream>
using namespace std;

#define MAX_SIZE 101

int arr[MAX_SIZE];        //globally defined
int top = -1;

void Push(int x){           //push function requires one integer parameter
    if(top == MAX_SIZE-1){
        cout<<"stack overflowed"<<"\n";
        return;
    }
    arr[++top] = x;
}

void Pop(){
    if(top == -1){
        cout<<"no more elements to pop"<<"\n";
        return;
    }
    top--;
}

void PrintStack(){
    int i = 0;
    while(i <= top){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<"\n";
}

void Top(){
    cout<<arr[top]<<"\n";
}

int main() {
	Push(1);
	Push(3);
	Push(4);
	Push(7);
	Pop();
	Push(4);
	cout<<"top of stack now is: ";
	Top();
	PrintStack();
	return 0;
}
	       
	       
#code 2	       

// implementation of stack using linkedlist

#include <iostream>
using namespace std;

class Node{               // creation of linkedlist
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* top = NULL;

void Push(int x){               //push into LL
    Node* tempNode = new Node(x);
    tempNode->next = top;
    top = tempNode;
}

void Pop(){                     // pulling node pointed by head
    Node* tempNode ;
    tempNode = top;
    if(top == NULL){
        return;
    }
    top = tempNode->next;
    delete tempNode;
}

void Print(Node* top){         //printing LL
    Node* tempNode;
    tempNode = top;
    while(tempNode != NULL){
        cout<<tempNode->data<<" ";
        tempNode = tempNode->next;
    }
}

int main() {
    Push(1);
    Push(2);
    Push(3);
    Pop();
    Print(top);
	return 0;
}	       
	       

#code 3	

// implementation queue using array

#include <iostream>
using namespace std;


int rear=-1,front=-1 ; //initially to indicate empty queue
const int N=10;
int arr[N];

// this function checks whether queue empty or not
int IsEmpty(){
    if (rear == -1 && front == -1)
    return 1;
    else
    return 0;
}
int Front(){// this function return front member of queue
    return front;
}

void Enqueue(int x){// this function adds queue members at rear side
    if(IsEmpty()){
        rear = 0;
        front = 0;
    }
    else if((rear + 1)%N == front){  //this cond checks whether queue filled or not, if it is filled then simply it returns back
        return;
    }
    else {
        rear = (rear + 1);
    }    
    arr[rear] = x;
}

void Dequeue(){
    if(IsEmpty()){
        return;
    }
    else if(rear == front){ //this condition 
        rear = -1;
        front = -1;
    }
    else{
        front += 1; // by increasing front we are dequeueing it's members from frontside
    }
}
	
