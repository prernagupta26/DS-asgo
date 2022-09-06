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
  

   ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA==NULL || headB==NULL){
            return NULL;
        }
        //creating two dummy variables
        ListNode* a=headA;
        ListNode* b=headB;
        
        //if a and b have differnet length then ,, we will stop the loop after second iteration
        
        while(a!=b){//loop till they become equal
            if(a==NULL){//if a reaches null frst move to headb
                a=headB;
            }
            else if(a!=NULL){
                a=a->next;
            }
                    
            if(b==NULL){
                b=headA;
            }
            else if(b!=NULL){
                b=b->next;
            }
        }
        return a;//when a becomes equal to b
                //if there is no intersection point a will point to null therefore automaticalyy null would be returned
    }