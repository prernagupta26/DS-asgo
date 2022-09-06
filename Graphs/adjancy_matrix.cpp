#include "bits/stdc++.h"
using namespace std;



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



void adj(){
      //adjancy list///weighted graph
      int n,m;
    vector<pair<int,int>> adj[n+1];//1 based graph index

    for(int i=0;i<m;i++){
        int u,v,wt;
        cin>>u>>v>>wt;//for every edge take node u and v

        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});  
    }
}


int main(){
    int n,m;
    cin>>n>>m;

    int adj[n+1][n+1]; //declare adjancy matrix

    //take adges as input
    for(int i=0;i<m;i++){ //no of edges times//no. of lines(traversal)==no. of edges
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;//undirected graph
        adj[v][u]=1;
    }

  



    return 0;
}