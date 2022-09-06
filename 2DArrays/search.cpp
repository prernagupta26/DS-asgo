//Search a 2D Matrix-->LEETCODE



// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row.


//full matrix sorted //using binary search


#include <bits/stdc++.h>
using namespace std;


//BRUTE FORCE
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(target==matrix[i][j]){
                    return true;
                }
            }
        }
        return false;
    }



    //BINARY SEARCH
    //Optimal Approach
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        //sorted matrix//binary search
        
        if(mat.size()==0){//matrix empty
            return false;
        }
        
        int n=mat.size();      //row
        int m=mat[0].size();   //col
        
        //create imaginary indexes
        
        int low=0;
        int high=(n*m)-1;//last index//ex 3*4 = 12-1==11last index-->bec starting from 0
        
        while(low<=high){
            int mid=(low+(high-low)/2);
        
        //now we will find real row and col no.
        int a=mid/m; //real row no. -->formula
        int b=mid%m; //real col no. -->formula
            
            if(target==mat[a][b]){//comparing to mid element
                return true;
            }
        else if(target>mat[a][b]){
            low=mid+1; //search in right as target is greater
        }
        else{
            high=mid-1; //search in left as target is smaller
        }
        }
        return false;
    }