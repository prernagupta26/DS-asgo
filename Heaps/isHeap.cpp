//given a binary tree//check if its a heap
//2 conditions-->1. is complete binary tree
           // -->2. satisfies heap properties

 
#include "bits/stdc++.h"
using namespace std;


struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }
};


int countNode(node* root){
    //base case
    if(root==NULL){
        return 0;
    }
    int ans=countNode(root->left)+countNode(root->right)+1;
    return ans;
}


bool isCBT(node* root,int index,int count){
    if(root==NULL){
        return true;
    }
    if(index>=count){
        return false;
    }

    else{
        bool left=isCBT(root->left,2*index+1,count);
        bool right=isCBT(root->right,2*index+2,count);
        return (left&&right);
    }

}


bool isMaxoder(node* root){
    //base case
    //leafe node
    if(root->left==NULL && root->right==NULL){
        return true;
    }
    if(root->right==NULL){ //only left child exist
        return(root->data > root->left->data);
    }
    
    else{
        bool left=isMaxoder(root->left);
        bool right=isMaxoder(root->right);

        return (left&&right  && (root->data > root->left->data && root->data > root->right->data));
        
    }
}



bool heap_true(node* root){
    int index=0;
    int count=countNode(root);


    if(isCBT(root,index,count) && isMaxoder(root)){
        return true;
    }
    else{
        return false;
        }
}



int main(){
     node* root=new node(98);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(190);
    root->right->left=new node(6);
    root->right->right=new node(7);

    if(heap_true(root)){
        cout<<"is heap";
    }
    else{
        cout<<"not heap";
    }
    return 0;
}