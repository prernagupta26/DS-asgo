#include "bits/stdc++.h"
using namespace std;

 vector<int> majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        
        int num1=-1,num2=-1,count1=0,count2=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==num1){
                count1++;
            }
            else if(nums[i]==num2){
                count2++;
            }
            else if(count1==0){
                num1=nums[i];
                count1=1;
            }
            else if(count2==0){
                num2=nums[i];
                count2=1;
            }
            
            else{
                count1--;
                count2--;
            }
        }
        
        //num1 and num2 can be one of our majority elments or both can be majority elemnts
        vector<int>ans;
        count1=count2=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==num1){
                count1++;        
            }
            else if(nums[i]==num2){
                count2++;
            }
        }
        if(count1>n/3){
            ans.push_back(num1);
        }
        if(count2>n/3){
            ans.push_back(num2);
            
        }
        
        return ans;
        
        
    }