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

node* reversek(node* &head,int k){
    node* prev=NULL;
    node* curr=head;
    node* temp;

   //reverse first k nodes
    int count=0;
    while(curr!=NULL && count<k){
        temp=curr->next;
        curr->next=prev;

        prev=curr;
        curr=temp;
        count++;
    }

    if(temp!=NULL){
    //recursively call for rest of the linked list
    head->next=reversek(temp,k);
    }
    return prev;
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
    
    
    node* newhead=reversek(head,2);
    display(newhead);

    return 0;

}