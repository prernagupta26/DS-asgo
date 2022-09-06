//calculated smallest element using max heap

#include "bits/stdc++.h"
using namespace std;



int Kth_smallest(int arr[],int r,int k){
    priority_queue<int>pq;
     for(int i=0;i<k;i++){
        pq.push(arr[i]); //step 1-->push first k elements into heap

     }

     for(int i=k;i<=r;i++){//step 2--> rest of the elements
        //insert according to conditions
        if(arr[i]<pq.top()){//if element is less then push into heap
            pq.pop();//and remove the top element
            pq.push(arr[i]);
        }

     }
     //step 3  ans=heap->top
     return pq.top();

}



int main(){
    int arr[]={7,10,4,20,15};
    int ans=Kth_smallest(arr,4,4);

    cout<<ans<<endl;
    return 0;
}