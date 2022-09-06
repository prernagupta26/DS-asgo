#include "bits/stdc++.h"
using namespace std;

//return element having maxmum frequency

int maxFreq(vector<int>&arr,int n){
    unordered_map<int,int> count;

    int maxf=0;
    int maxans=0;

    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
        maxf=max(maxf,count[arr[i]]);
    }

    for(int i=0;i<arr.size();i++){
        if(maxf==count[arr[i]]){
            maxans=arr[i];
            break;
        }
    }
    return maxans;
}

int main(){

    return 0;
}