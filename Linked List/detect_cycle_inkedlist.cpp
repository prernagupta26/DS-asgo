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


void makeCycle(node* &head,int pos){
    node* temp=head;
    node* startNode;

    int count=1;

    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;  //cycyle
}


bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}


void removeCycle(node* &head){
    node* slow=head;
    node* fast=head;

    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast); 
    
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
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
    insertlast(head,6);


    makeCycle(head,3);
    cout<<detectCycle(head)<<endl;

    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);

    return 0;

}