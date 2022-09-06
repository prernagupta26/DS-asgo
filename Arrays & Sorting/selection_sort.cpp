#include "bits/stdc++.h"
using namespace std;

int main(){
    int n=5;
    int arr[5]={3,5,2,6,1};

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){ // elements after first element is traversed by j//searching for smallest elemtent in rest array(except first elemnt)
                swap(arr[j],arr[i]);//swapping min element(arr[j]) whith first elemnt(arr[i]) 
            }

        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }

    return 0;
}