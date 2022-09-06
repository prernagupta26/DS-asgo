#include "bits/stdc++.h"
using namespace std;

void topo(int node,int vis[],stack<int>&st,vector<pair<int,int>>adj[]){
    vis[node]=1;
    for(auto i:adj[node]){
        if(!vis[i.first]){
            topo(i.first,vis,st,adj);
        }
    }
    st.push(node);//pushing node at the end of call
}

void shortestPath(int src,int n,vector<pair<int,int>>adj[]){
      
      int vis[n]={0};
      stack<int>st;
      for(int i=0;i<n;i++){
        if(!vis[i]){
            topo(i,vis,st,adj);
        }

      }

int dist[n];
for(int i=0;i<n;i++){
    dist[i]=INT_MAX;
}
    dist[src]=0;
     while(!st.empty()){
        int node=st.top();
        st.pop();
        
        if(dist[node]!=INT_MAX){
        for(auto i: adj[node]){
            if(dist[i.first]+i.second<dist[i.first]){
                dist[i.first]=dist[node]+i.second;
            }
        }
     }
     }
     for(int i=0;i<n;i++){
        if(dist[i]==1e9)  cout<<"INT_MAX";
        else cout<<dist[i]<<" ";
     }

}



int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> adj[n];
    for(int i=0;i<m;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
    }
    shortestPath(0,n,adj);
    return 0;
    
}