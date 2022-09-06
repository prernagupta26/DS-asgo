    #include "bits/stdc++.h"
using namespace std;


  bool f(int node,vector<int>adj[],vector<int>&color){
        queue<int>q;
        q.push(node);
        color[node]=1;
        
        while(!q.empty()){
            
           int frnt=q.front();
           q.pop();
           
           for(auto i:adj[frnt]){
               if(color[i]==-1){
                   color[i]=1-color[frnt];//make adjacent node of oppposite color
                   q.push(i);
               }
               else if(color[i]==color[frnt]){
                   return false;
               }
           }
        }
        
        return true;
    }

	bool isBipartite(int V, vector<int>adj[]){
	    vector<int>color(V+1,-1);
	    
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	        if(!f(i,adj,color)) return false;
	    }
	    }
	    return true;
	}