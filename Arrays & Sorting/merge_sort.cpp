#include "bits/stdc++.h"
using namespace std;
    

    //uses devide and conquer technique


void merges(int arr[],int low,int mid,int high){
    //low to mid and mid+1 to high  array are already sorted 
    //we have to merge these two

    //make two temporary arrays
    int n1=mid-low+1;
    int n2=high-mid;

    int a[n1];
    int b[n2];

    //add values in these two temp arrays
    for(int i=0;i<n1;i++){
        a[i]=arr[low+i];//starting point in arrays is i
        //stored low to mid elments in a
    }

     for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
        //stored mid to high elements in b
    }


    //now merge these two arrays
    int i=0;//i traversing a array
    int j=0; //j traversing b array
    int k=low;//traverse main array

    while(i<n1 && j<n2){
       if(a[i]<b[j]){
          arr[k]=a[i];//put small value
          k++;
          i++; //increment lower value index
      }
      else{  //b[j] smaller
        arr[k]=b[j];
        k++;
        j++;

      }
    }//if any pointer out of two reaches end //we will come ot of while loop

    //if j pointer reaches till end before i
    //make sure to print all the elements of i left
    //and vice versa

    while(i<n1){//j reached till end//i left
        arr[k]=a[i];
        k++;
        i++;
    }

    while(j<n2){//i reached till end//j left
         arr[k]=b[j];
          k++;
          j++;
    }

}


void mergeSort(int arr[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;

        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);

        merges(arr,low,mid,high);
    }
}


int main(){
    int arr[5]={5,8,3,2,1};
    mergeSort(arr,0,4);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
} 