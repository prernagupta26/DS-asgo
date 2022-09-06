#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){   //constructor
        data=val;
        next=NULL;
    }
};

void insertlast(node* &head,int val){
    node* n=new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;   //iterator
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;  //new node

}

//iterative way to reverse linked list
node* reverse(node* &head){  //return node
    node* prev=NULL;
    node* curr=head;
    node* nextptr;

    while(curr!=NULL){
        nextptr=curr->next;
        curr->next=prev;

        prev=curr;
        curr=nextptr;
    }
    return prev;

}


//recursive way to reverse a linked list
node* reverseRecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    node*newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

void display(node* head){
    // node* temp=head;
    while(head!=NULL){  //traverse
    cout<<head->data<<" ";
    head=head->next;

    }
    cout<<endl;
}




int main(){
    node* head= NULL;
    insertlast(head,1);
    insertlast(head,2);
    insertlast(head,3);
    insertlast(head,4);
    insertlast(head,5);
    
    
    display(head);

    node* newhead=reverseRecursive(head);
    display(newhead);

    return 0;

}