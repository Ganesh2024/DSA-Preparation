# DSA-Preparation
problems


// implementation of stack using LL

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
