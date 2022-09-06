//rat in a maze problem


#include<iostream>
#include<string>
using namespace std;

bool isSafe(int** arr,int x,int y,int n)  { 
    //tells if we can go to a particular block or not
    if(x<n && y<n && arr[x][y]==1){
                    
        return true;
    }
    return false;


}

bool ratInMaze(int** arr,int x, int y,int n,int** solArray){
    
    if(x==n-1 && y==n-1){  //rat reached at destination

       solArray[x][y]=1;
       return true;

    }



    if(isSafe(arr,x,y,n));{
        solArray[x][y]=1;  //getting solution

        if(ratInMaze(arr,x+1,y,solArray)){ //x+1--> moving in right direction
             return true;
        }
        
    if(ratInMaze(arr,x,y+1,solArray)){   //y+1-->moving in down direction
        return true;
   
    }
    // if we dont get solution from both approaches we have to backtrack
    
    solArray[x][y]=0; //come back to intial point and change the path//backtrack

    return false;
    }
    
    return false;
}


int main(){
    int n;
    cin>>n; //take size of 2d matrix from user
    
    int **arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int **solArray=new int*[n];
    for(int i=0;i<n;i++){
        solArray[i]=new int[n];
        for(int j=0;j<n;j++){
            solArray[i][j]=0;
        }
    }

    if(ratInMaze(arr,0,0,solArray)){
         for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<solArray[i][j]<<" ";
        } cout<<endl;
    }
    }

    return 0;
}