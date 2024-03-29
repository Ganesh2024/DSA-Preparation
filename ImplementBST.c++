
//implementation of Binary Search tree  

#include <iostream>
using namespace std;

class BstNode{                 // class which creates nodes
    public:
        int data;
        BstNode* left;
        BstNode* right;
        BstNode(int value){
            this->data = value;
            this->left = NULL;
            this->right = NULL;
        }
};

BstNode* Insert(BstNode* root,int value){      //function which insert nodes
    if(root == NULL)
        return new BstNode(value);
    if(value > root->data)
        root->right = Insert(root->right,value);
    else if(value < root->data)
        root->left = Insert(root->left,value);
    return root;   
}

void InOrderTraversal(BstNode* root){         //this function traverses tree and prints 
    if(root == NULL)                          //from values from low to high
        return;
    InOrderTraversal(root->left);
    cout<<root->data<<" ";
    InOrderTraversal(root->right);
}

int main() {
    BstNode* root = NULL;
    root = Insert(root,20);
    Insert(root,10);
    Insert(root,40);
    Insert(root,15);
    Insert(root,5);
    Insert(root,12);
    Insert(root,25);
    Insert(root,45);
    InOrderTraversal(root);
    return 0;
}
