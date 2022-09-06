//maxheap

#include "bits/stdc++.h"
using namespace std;

class heap{
    public:
    int arr[100];
    int size=0;
    
    heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){
        size+=1;
        int index=size;  //index to be inserted
        arr[index]=val; //node inserted at end of array

        while(index>1){
            int parent=index/2;

            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return ;
            }
        }

    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        } cout<<endl;
    }

    void deletefromHeap(){
        if(size==0){
            cout<<"nothing to delte";
            return;
        }
        //put last node in first node
        arr[1]=arr[size]; //step 1
        size--;//step 2 //remove last elemnt

        //step 3//take root node to its correct position
        int i=1;
        while(i<size){
            int leftIndex=2*i;
            int rightIndex=(2*i)+1;

            //compare current node(i) wiht its childern

            if(leftIndex<size && arr[i]<arr[leftIndex]){
               //checking if left index is not out of bound
                swap(arr[i],arr[leftIndex]);
                i=leftIndex;
            }
            else if(rightIndex<size && arr[i]<arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }
            else{
                return ;
            }
        }
    }

};


int main(){
   
   heap h;
   h.insert(50);
   h.insert(55);
   h.insert(53);
   h.insert(52);
   h.insert(54);

   h.print();
   h.deletefromHeap();
   h.print();



   return 0;
    
}