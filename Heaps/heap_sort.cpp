//maxheap

#include "bits/stdc++.h"
using namespace std;

class heap{
    public:
    int arr[100];
    int size=0;

};

//1 based indexing

void heapify(int arr[],int n,int i){
    int largest=i;//element which we have to take to its correct position
    int left=2*i;
    int right=(2*i)+1;

   //comparing our node with its children and updating if small
    if(left<=n && arr[largest]<arr[left]){ 
      //1 based indexing thats why left<=n(=)
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



void heapSort(int arr[],int n){
    int size=n;//-->size

    while(size>1){
        //step 1//swap first and last
        swap(arr[size],arr[1]);
        size--;
        //step 2
        heapify(arr,size,1);
    }

}


int main(){
   
   int arr[6]={-1,54,53,55,52,50};
   int n=5;
   //heap creation
  for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;

   heapSort(arr,n);

   return 0;
    
}