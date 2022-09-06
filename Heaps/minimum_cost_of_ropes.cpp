//n given ropes-->different lengths//connect into one
//cost to coonnect-->equal to their lengths
//connect ropes with min cost


#include "bits/stdc++.h"
using namespace std;

int minCost(int arr[],int n){
    priority_queue<int,vector<int>,greater<int>> pq; //create min heap
    

    for(int i=0;i<n;i++){ //pushing array elements into min heap
        pq.push(arr[i]);
    }

    int cost=0;
    while(pq.size()>1){
        int a=pq.top(); //minimum element-->root in minheap
        pq.pop();

        int b=pq.top();//second min element
        pq.pop();

        int sum=a+b;
        cost+=sum;
        pq.push(sum);

    }
    return cost;
}

int main(){
    int a[]={4,3,2,6};
    
    int ans=minCost(a,4);
    cout<<ans<<endl;

    return 0;
}