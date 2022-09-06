   #include "bits/stdc++.h"
using namespace std;
  
  bool detect(int node,int v,vector<int>adj[], vector<int>&vis){
      
      queue<pair<int,int>>q;//creating queue for bfs traversal and parent
      vis[node]=true;
      q.push({node,-1});//parent of first node is -1-->no parent
      
      while(!q.empty()){
          int frnt=q.front().first;
          int parent=q.front().second;
          
          q.pop();
          
          //searching for neighbours of front node in adjancy list
          for(auto i:adj[frnt]){
              if(!vis[i]){
                  vis[i]=true;
                  q.push({i,frnt});//push the node from adjancy list in the queue and mark its parent as the curr node
              }
              else if(parent!=i){//if the node in adj list is visited already then the node must be parent of our current node 
              //and if not parent then our node is visited by someone else this means there is cycle in linked list
                  return true;
              }
          }
      }
      return false;
  }
 
   bool isCycle(int v, vector<int> adj[]) {
       
       vector<int>vis(v+1,0);
       
       for(int i=1;i<=v;i++){
           if(!vis[i]){
               if(detect(i,v,adj,vis)){
                   return true;
               }
           }
       }
}