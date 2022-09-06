#include "bits/stdc++.h"
using namespace std;

//only one duplicate no. present in array

//using hashing  -->tc-->O(n)
               //-->sc-->O(n)


    int findDuplicate(vector<int>& a) {
 
        
        unordered_map<int,int> m;
        int ans;
        for(int i=0;i<a.size();i++){
            m[a[i]]++;//increasing frequency
            if(m[a[i]]>1){
                ans=a[i];
                break;
            }
        }
        return ans;
    }





//MOST OPTIMISED
//Using linked list cycle method

int findDuplicate(vector<int>& a) {
        
        //MOST OPTIMISED
      //method-->using linked list cycle method
        
        int s=a[0],f=a[0];
        do{
            s=a[s];
            f=a[a[f]];
            
        }while(s!=f);
            
            f=a[0];
        while(s!=f){
            s=a[s];
            f=a[f];
        }
        return s;
