#include "bits/stdc++.h"
using namespace std;


//moores voting algo

    int majorityElement(vector<int>& nums) {
        
        
        int count=0;
        int element=0;
        
        for(int i=0;i<nums.size();i++){
            if(count ==0){
                element=nums[i];
            }
            
            if(element==nums[i]){
                count+=1;
            }
            else{
                 count-=1;
            }
        }
        return element;
    }