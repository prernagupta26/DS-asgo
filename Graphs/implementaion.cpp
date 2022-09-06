#include "bits/stdc++.h"
using namespace std;


class graph{
    public:
    unordered_map<int,list<int>> adj;

    void addedge(int u,int v,bool direction){
       // direction=0-->undirected graph
       // direction=1-->directed graph

       //create an edge from u to v
       adj[u].push_back(v);

       if(direction==0){
        adj[v].push_back(u);//if undirected graph//create edge from v to u as well

       }
    }

       void print_adj_list(){

        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
       
    }

};



int main(){
    int n;
    cout<<"enter the number of nodes"<<endl;
    cin>>n;

    int m;
    cout<<"enter edges:"<<endl;
    cin>>m;

    graph g;

    for(int i=0;i<m;i++){
        int u,v;
        cout<<"enter value of u and v-->nodes"<<endl;
        cin>>u>>v;
        
        g.addedge(u,v,0);//0-->undirected graph
    }

    //print graph
    g.print_adj_list();

    return 0;

}