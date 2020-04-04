#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Data structure to store a Binary Tree node
struct Node
{
    int key;
    Node *left, *right;

    Node(int key)
    {
        this->key = key;
        this->left = this->right = nullptr;
    }
};

int max(int a,int b){
	return (a>b ? a : b);
}
// Recursive function to check if two given binary trees are identical or not
int height(Node* root)
{
    //recursive solution approch....
    if(!root){
    	return 0;
    }
    return max(height(root->left),height(root->right))+1;
}

// main function
int main()
{
    // construct first tree
    Node* x = nullptr;
    
    x = new Node(15);
    x->left = new Node(10);
    x->right = new Node(20);
    x->left->left = new Node(8);
    x->left->right = new Node(12);
    x->right->left = new Node(16);
    x->right->right = new Node(25);
    x->right->right->left = new Node(45);

   

    cout<<height(x);

    return 0;
}
