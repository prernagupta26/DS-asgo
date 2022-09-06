#include "bits/stdc++.h"
using namespace std;


int main(){

    //maxheap
    priority_queue<int>pq;//maxheap-->default

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"element at top"<<endl;
    cout<<pq.top()<<endl;

    pq.pop();
    cout<<pq.top()<<endl;;


    priority_queue<int,vector<int>,greater<int>> minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    cout<<"min heap"<<endl;
    cout<<"element at top"<<endl;
    cout<<minheap.top()<<endl;

    minheap.pop();
    cout<<minheap.top();

  

}