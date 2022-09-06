#include "bits/stdc++.h"
using namespace std;

int main(){
    int n=5;
    int arr[5]={3,5,2,6,1};

    int counter=1;//no of iterations
    
    while(counter<n){
        for(int i=0;i<n-counter;i++){ //checking elments till n-1iterations
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);//swapping adjacent elements if not in right oder
            }
        }
        counter++;
    }
    

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}