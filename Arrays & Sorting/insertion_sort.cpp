#include "bits/stdc++.h"
using namespace std;

int main(){
    int n=5;
    int arr[5]={3,5,2,6,1};

    for(int i=1;i<n;i++){//we will start from 2nd element// assuming 1 st is already sorted
       int current=arr[i];
       int j=i-1;//assumed sorted array

       while(arr[j]>current && j>=0){//comparing current elent with prvious indexes
        arr[j+1]=arr[j];//moving by 1 position
        j--;
       }
       arr[j+1]=current;
       
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }


    return 0;
} 