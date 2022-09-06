#include "bits/stdc++.h"
using namespace std;

void prepare_adj_list(unordered_map<int,list<int>> &adj, vector<pair<int,int>> &edges){
    
    //to create adjancy list
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}


void calc_bfs(unordered_map<int,list<int>>adj, unordered_map<int,bool>&visited, vector<int> &ans,int node){

    queue<int> q;
    q.push(node);
    visited[node]=1;

    while(!q.empty()){
       int frontnode=q.front();
       q.pop();

       //store front node in ans
       ans.push_back(frontnode);

       //traverse all neighbours of front node
       for(auto i:adj[frontnode]){
        if(!visited[i]){
            q.push(i);
            visited[i]==1;
        }
       }
    }
}


vector<int> bfs(int vertex, vector<pair<int,int>> edges){
    unordered_map<int,list<int>>adj;
    vector<int>ans;

    unordered_map<int,bool>visited;

    prepare_adj_list(adj,edges);
  
    //traverse all components of a graph
    for(int i=0;i<=vertex;i++){
        if(!visited[i]){
            calc_bfs(adj,visited,ans,i);
        }
    }

    return ans;

}

int main(){

    return 0;
}