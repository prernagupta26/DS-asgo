 #include "bits/stdc++.h"
using namespace std;

class ListNode{
    public:
    int data;
    ListNode* next;

    ListNode(int val){   
        data=val;
        next=NULL;
    }
};
  

//LEETCODE REVERSE LIST 2
ListNode* reverseBetween(ListNode* head, int start, int end) {
        
        if(!head || start==end){
            return head;
        }
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        
        ListNode* prev=dummy;
        
        int pos=1;
        while(pos<start){
            prev=prev->next;
            pos++;
        }
        ListNode* curr=prev->next;
        
        while(start<end){
            ListNode* extract=curr->next;
            //connect next of curr to next of node to be extracted
            curr->next=extract->next;
            extract->next=prev->next;//moving node to be extracted to the front
            prev->next=extract;//reconnect prev to new front of the list
            start++;//so that we can terminate the condition when it becomes equal to n
            
        }
      
            
      return dummy->next;
      
    }