 
#include "bits/stdc++.h"
using namespace std;

void heapify(vector<int> &arr,int n,int i){ //**0 based indexing
    int largest=i;//element which we have to take to its correct position
    int left=2*i+1;
    int right=(2*i)+2;

   //comparing our node with its children and updating if small
    if(left<n && arr[largest]<arr[left]){
        largest=left;
    }
     if(right<n && arr[largest]<arr[right]){
        largest=right;
    }

    //check if largest is updated or not
    if(largest!=i){ //updated
        swap(arr[largest],arr[i]);
        //check for next subtree
        heapify(arr,n,largest);
    }

}

void merge(vector<int>&a,vector<int>&b,int n,int m){
    //step1-->merge both arrays
     vector<int> ans; //storing elements of both vectors into one
     
     for(auto i:a){//auto i belongs to a
        ans.push_back(i);
     }
     for(auto i:b){
        ans.push_back(i);
     }

    //step2-->build heap
    int s=ans.size();
    for(int i=s/2-1;i>=0;i--){
        heapify(ans,s,i);
    }

    for(int i=0;i<s;i++){
        cout<<ans[i]<<" ";
    }

}


int main(){
   vector<int> a={10,5,6,2};
   vector<int> b={12,7,9};

    merge(a,b,4,3);
    
    
    

    return 0;

}