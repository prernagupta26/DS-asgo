 #include "bits/stdc++.h"
using namespace std;
    

   class ListNode{
    public:
    int data;
    ListNode* next;

    ListNode(int val){   //constructor
        data=val;
        next=NULL;
    }
};

    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL){
        return head;
        }
        
        ListNode* newhead=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        
        return newhead;
    }
    
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL || head->next==NULL){
            return true;
        }
        //fist find mid of linked list
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        //now slow points to middle
        
        //reverse right inked list(slow->next)
        slow->next=reverse(slow->next);
        slow=slow->next;
        
        while(slow!=NULL){//now check if pointers are equal or not
        if(head->data!=slow->data){
            return false;
        }
            head=head->next;
            slow=slow->next;
        
            
            }
        
    return true;
        
    }