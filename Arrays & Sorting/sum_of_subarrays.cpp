#include "bits/stdc++.h"
using namespace std;

int main(){
    int n=5;
    int a[5]={1,2,0,7,2};

    int curr=0;//stores current sum
    for(int i=0;i<n;i++){
        curr=0;//differnt sum of every subarray
        //next subarray starts after i is incremented
        for(int j=i;j<n;j++){
            curr+=a[j];
            cout<<curr<<endl;
        }
    }

    return 0;
}