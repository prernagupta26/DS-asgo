#include <bits/stdc++.h>

using namespace std;

 //using dfs
   bool f(int node,vector<int>&color,vector<vector<int>>& graph){
      
       // if(color[node]==-1) color[node=1];
       
       //dfs-->traversing to adjacent of adjacent of adjacent and so on//deep
       for(auto i:graph[node]){
           if(color[i]==-1){
               color[i]=1-color[node];
               if(!f(i,color,graph)) return false;
               
           }
           else if(color[i]==color[node]) return false;
       }
       return true;
   }
    
    
    bool isBipartite(vector<vector<int>>& graph) {
     
        int v=graph.size();
        vector<int>color(v,-1);//initialized by -1
        
        //fir disconnected components
        for(int i=0;i<v;i++){
            if(color[i]==-1){//not colored
                color[i]=1;
                if(!f(i,color,graph)) return false;
            }
        }
        return true;
    }