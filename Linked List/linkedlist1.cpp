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

void insertbegin(node* &head,int val){
    node *n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;

}

void insertmid(node* head,int val,int index){
    node* n=new node(val);
    node* temp=head;
   for(int i=0;i<index;i++){
       temp=temp->next;
   }
   temp->next=n;
   n->next=temp->next->next;
}



bool search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}


void deletehead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}


void deletenode(node* &head,int val){
    if(head==NULL){
        return;
    }

    if(head->next==NULL){
        deletehead(head);
    }

    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }

    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}


void display(node* head){
    node* temp=head;
    while(temp!=NULL){  //traverse
    cout<<temp->data<<" ";
    temp=temp->next;

    }
    cout<<endl;
}


int main(){
    cout<<"hello";
    node* head=NULL;
    insertlast(head,1);
    insertlast(head,2);
    insertlast(head,3);

    insertbegin(head,5);
    // insertmid(head,45,1);
     deletehead(head);
    display(head);

    // cout<<search(head,95)<<endl;
    return 0;
} 