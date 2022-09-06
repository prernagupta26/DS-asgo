//maxheap

#include "bits/stdc++.h"
using namespace std;


//**1 based indexing
void heapify(int arr[],int n,int i){
    int largest=i;//element which we have to take to its correct position
    int left=2*i;
    int right=(2*i)+1;

   //comparing our node with its children and updating if small
    if(left<=n && arr[largest]<arr[left]){
        largest=left;
    }
     if(right<=n && arr[largest]<arr[right]){
        largest=right;
    }

    //check if largest is updated or not
    if(largest!=i){ //updated
        swap(arr[largest],arr[i]);
        //check for next subtree
        heapify(arr,n,largest);
    }

}

int main(){

   

   int arr[6]={-1,54,53,55,52,50};
   int n=5; //size of array used
   for(int i=n/2;i>0;i--){
       heapify(arr,n,i);
   }
   for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
   }cout<<endl;



   return 0;
    
}