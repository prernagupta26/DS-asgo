#include "bits/stdc++.h"
using namespace std;

int main(){
    int n=7;
    int a[7]={1,5,3,4,3,5,6};

    const int N=1e6+2;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1; //initialize idx array with -1
    }

    int minidx=INT_MAX;

    for(int i=0;i<n;i++){
        if(idx[a[i]]!=-1){
            minidx=min(minidx,idx[a[i]]);
        }
        else{
            idx[a[i]]=i;//putting i at (a[i])th index in idx array

        }
    }

    //if not found r
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
   else{
    cout<<minidx<<endl;
    }
    return 0;
}


 //2ND APPROACH USING MAPS

// Total Time Taken - 0.6/2.54

 

// int firstRepeated(int arr[], int n) {
//        // code here
//        unordered_map<int,int>m;
//        for(int i=0;i<n;i++)
//        {
//            m[arr[i]]++;
//        }
//        for(int i=0;i<n;i++)
//        {
//            if(m[arr[i]]>1)
//            {
//                return i+1;
//            }
//        }
//        return -1;
//    }