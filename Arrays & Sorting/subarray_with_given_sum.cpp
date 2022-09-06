#include "bits/stdc++.h"
using namespace std;

int main(){ //2 pointer approach
    int n=5;
    int a[5]={1,2,3,7,5};
    int s=12;//given sum 

    int i=0,j=0;//iterators
    int st=-1,en=-1;//storing final pointers
    int sum=0;//i to j sum

    
    while(j<n && sum+a[j]<=s){//sum+a[j]-->total sum
        sum+=a[j];
        j++;
    }

    if(sum==s){
        cout<<i+1<<" "<<j<<endl;//i index se output-->i1
//starting index     //ending index
        return 0;
    }
    while(j<n){
        sum+=a[j];
        if(sum>s){
            sum-=a[i];//increasing i pointer and decreasing sum-->because current sum is greater the guven sum

            i++;
        }
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }

     cout<<st<<" "<<en<<endl;

    return 0;
}