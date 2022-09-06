//Search a 2D Matrix II-->LEETCODE


// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.
//not full array sorted

#include <bits/stdc++.h>
using namespace std;

   bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        int n=mat.size();
        int m=mat[0].size();
        
        //move our pointer to last col of first row
        if(n==0){
            return false;
        }
        
        int i=0;
        int j=m-1;
        
        //we will compare
        //everything left of our index is less then it
        //evrything down is greater
        //as row and col are sorted
        
        while(i<n && j>=0){
        
        if(target==mat[i][j]){
            return true;
        }
        else if(target>mat[i][j]){//if target greater
            i++;//search down//row increasing
        }
        
        else{//target less
            j--;//search in left //row dec
        }
        }
       return false;
    }