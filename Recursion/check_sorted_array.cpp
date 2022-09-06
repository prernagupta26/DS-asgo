//check if array is sorted or not //using recursion

#include<iostream>

using namespace std;
 
bool sorted(int arr[],int n){

    if(n==1){
        return true;
    }

    bool restArray=sorted(arr+1,n-1);  //arr+1---pointer next 0 to 1

    return arr[0]<arr[1] && restArray;

    //return arr[0]<arr[1] && sorted(arr+1,n-1);

    
}


int main(){
    int arr[]={1,7,3,4,5,6};

    cout<<sorted(arr,6)<<endl;

    return 0;

}

