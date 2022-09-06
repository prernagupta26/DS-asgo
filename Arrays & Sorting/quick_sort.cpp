#include "bits/stdc++.h"
using namespace std;
    

    //uses devide and conquer technique

int partition(int arr[],int low,int high){
    int pivot=arr[high];

    int i=low-1;

    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]); //swap i and j if a[j] is less then pivot
            //else j++(through loop)
        }
    }
    swap(arr[i+1],arr[high]);//at end i points to last no. which is less then pivot
    return i+1;//index of pivot//repositioned
}



void quickSort(int arr[],int low,int high){
    if(low<high){

    int pi=partition(arr,low,high);//move pivot elment ot correct position

    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);

    }
}





int main(){
    int arr[5]={5,8,3,2,1};
    quickSort(arr,0,4);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
} 