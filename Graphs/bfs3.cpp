#include "bits/stdc++.h"
using namespace std;

class graph{
    map<int,list<int>> m ;
    public:
    void addedge(int x,int y){
        m[x].push_back(y);
        m[y].push_back(x);
    }

    void bfs(int src){
        //src-->starting node
        //we have to iterate out graph using src node

        map<int,int> visited;
        queue<int>q;

        //add source node in queue
        q.push(src);
        visited[src]=1;

        while(!q.empty()){
            //remove node
            int node=q.front();
            q.pop();
            cout<<node<<" ";
            for(auto i:m[node]){//for neighbour
                if(!visited[i]){
                    q.push(i);
                    visited[i]=1;//mark that neighbour as visited
                }
            }
        }
    }

};

int main(){
    graph g;
    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(2,3);
    g.addedge(3,4);
    g.addedge(4,5);
    
    g.bfs(0);

    return 0;
}