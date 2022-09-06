#include "bits/stdc++.h"
using namespace std;


vector<int> bfs(int V,vector<int>adj[]){
    vector<int>bfs;//store traversal node//ans
    vector<int> vis(V+1,0);//visited array

    for(int i=0;i<=V;i++){
        if(!vis[i]){
            queue<int>q;
            q.push(i);//startng node
            vis[i]=1;

            while (!q.empty())
            {
                int node=q.front();
                q.pop();//took first elment out
                bfs.push_back(node);

                for(auto it:adj[node]){
                    if(!vis[it]){
                        q.push(it);
                        vis[it]=1;
                    }
                }
            }
            
        }
    }
}



void adj(){
      //adjancy list
      int n,m;
    vector<int> adj[n+1];//1 based graph index
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;//for every edge take node u and v

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
