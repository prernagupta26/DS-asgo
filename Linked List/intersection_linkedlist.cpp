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

 //funtion to find lenght of both linked lists
 int lenght(node* head){
     int l=0;
     node* temp=head;
     while(temp!=NULL){
         temp=temp->next;
         l++;
     }
     return l;
 }


int intersection(node* &head1,node* &head2){

    int l1=lenght(head1);
    int l2=lenght(head2);

    int d=0; //differenece of lenghts
    node* ptr1;
    node* ptr2;
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;    //pointer 1 is pointed to bigger linked list
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;

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