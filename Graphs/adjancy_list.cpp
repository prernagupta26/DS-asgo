#include "bits/stdc++.h"
using namespace std;

class graph{
    public:
    ///create adjancy list
    vector<vector<int>> adj;


    void create_adj(int u,int v,bool direction){
        adj[u].push_back(v);
        if(direction==0){
        adj[v].push_back(u);
        }
    }

    //printing adjancy list
    void print_adj(){
        vector<int> ans;
        for(int i=0;i<adj.size();i++){
            adj[i].push_back(i);
            for(int j=0;j<adj[i].size(i);j++){
                ans.push_back[i][j];
            }

        }
    }

};