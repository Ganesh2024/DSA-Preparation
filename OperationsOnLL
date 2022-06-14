
//Operations on LL

//1) Creating a node
//2) Inserting a node
//3) Deleting a node
//4) Print a LL
//5) Reverse a LL
//6) Printing a LL in reverse order

#include <iostream>
using namespace std;

class Node{                                  // class used to create nodes
    public:
       int data;
       Node* next;
       Node(int value){
           data = value;
           next = NULL;
       }
};

Node* head = NULL;                           // Creating global head to access head in any function



void CreateInsertNode(int val,int pos){
    Node* NewNode = new Node(val);           //Creation of new node
    Node* TempNode = head;
    int i=1;
    if(pos == 1){                           //Inserting a new node at begining
        NewNode->next = head;
        head = NewNode;
    }
    else{
        while(i<pos-1 && TempNode != NULL){  //LL Traversal to pos-1 position
            TempNode = TempNode->next;
            ++i;
        }
        if(TempNode != NULL){               //inserting a node at any position otherthan initial one
            NewNode->next = TempNode->next;
            TempNode->next = NewNode;
        }
        
    }
    
}

void DeleteNode(int pos){                // function to Delete a Node in LL
    int i = 1;
    Node* TempNode = head;
    while(i<pos-1 && TempNode != NULL){  //LL Traversal to pos-1 position
            TempNode = TempNode->next;
            ++i;
        }
        if(TempNode != NULL){            // Condition @ which we can Delete a Node in LL
            Node* DelNode = TempNode->next;
            TempNode->next = DelNode->next;
            DelNode->next = NULL;
        }
}

void Reverse(){                          
    Node* prev = NULL;                   //Here we are seprating LL into two seprate LL last element adderess of right LL will be stored by "prev" pointer,
    Node* current = head;                //first element adderess of left LL will be stored by "current" pointer
    Node* next;                          //while moving 1st element from left LL to right LL we use "next" pointer
    while(current != NULL){              
        next = current->next;             
        current->next = prev;            
        prev = current;                  
        current = next;                   
    }
    head = prev;
}

void PrintLL(){                            // to print LL
    Node* TempNode = head;
    int count=0;
    while(TempNode != NULL){
        cout<<TempNode->data<<" ";
        TempNode = TempNode->next;
        count++;
    }
    cout<<"\n";
}

int main(){                              // Driver function
    Node n1(1),n2(2),n3(3);
	head = &n1;
	n1.next = &n2;
	n2.next = &n3; 
	CreateInsertNode(4,4);
    CreateInsertNode(2,2);
	PrintLL();
    DeleteNode(2);
    PrintLL();
    Reverse();
    PrintLL();
	return 0;
}
