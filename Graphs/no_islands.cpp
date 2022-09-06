#include <bits/stdc++.h>

using namespace std;

//GFG
//all 8 directions allowed 
   
    void bfs(int r,int c,vector<vector<char>>& grid,vector<vector<int>>&vis){
        vis[r][c]=1;//marked vis
        
        queue<pair<int,int>>q;
        q.push({r,c});
        
          int n=grid.size();//rows
          int m=grid[0].size();//col
        
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            
            int row=it.first;//row
            int col=it.second;//col
            
                //search in all(8) directions
                    //[i-1][j]->up
                    //[i][j-1]->left
                    //[i+1][j]->down
                    //[i][j+1]->right
                    //[i-1][j-1]->diagnol
                    //[i+1][j+1]
                    //[i-1][j+1]
                    //[i+1][j-1]
                    
                    //everything varying from -1 to +1 run loops
                    //find neighbour row and neighour col
                    
            
            //traverse in neighbours and mark them if its a land
             int nr,nc;
                    for(int i=-1;i<=1;i++){
                        for(int j=-1;j<=1;j++){
                            nr=row+i;//neghbour row
                            nc=col+j;//neighbour col
                            if(nr>=0 and nr<n and nc>=0 and nc<m and grid[nr][nc]=='1' and vis[nr][nc]==0){//cheking if the points are valid and grid->is land
                             //validity                            //land                  //visited   
                                 vis[nr][nc]=1;
                                 q.push({nr,nc});
                            }
                        }
                    }
                    
           }
    } 

    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();//rows
        int m=grid[0].size();//col
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 and grid[i][j]=='1'){//not visited nand is land
                    count++;
                    bfs(i,j,grid,vis);
                    
                }
            }
        }
        return count;
    }



    //LEETCODE
    //only 4 directions allowed
    //diagnol not allowed
    
    void bfs(int r,int c,vector<vector<int>>&vis,vector<vector<char>>& grid){
        vis[r][c]=1;
        int n=grid.size();//r
        int m=grid[0].size();//c
        
        queue<pair<int,int>>q;
        q.push({r,c});
        
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            
            int row=it.first;
            int col=it.second;
            
            //check for all 4 directions
            //i-1 j //i j-1 //i+1 j //i j+1
            int nr,nc;
            for(int i=-1;i<=1;i++){//row change
                nr=row+i;
                if(nr>=0 and nr<n and vis[nr][col]==0 and grid[nr][col]=='1'){//col remains same
                    vis[nr][col]=1;
                    q.push({nr,col});
                }
            }
            for(int j=-1;j<=1;j++){//col change
                nc=col+j;
                if(nc>=0 and nc<m and vis[row][nc]==0 and grid[row][nc]=='1'){//row same
                    vis[row][nc]=1;
                    q.push({row,nc});
                }
            }
            
        }
        
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();//r
        int m=grid[0].size();//c
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0  and grid[i][j]=='1'){//not vis and land
                    count++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return count;
    }