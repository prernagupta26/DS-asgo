
#include "bits/stdc++.h"
using namespace std;



int main(){
    unordered_map<string,int> m; //creation
   //key,value

   //insertion
   //methods of insertion
   pair<string,int> p =make_pair("prerna",4);  //1
   m.insert(p);

   pair<string,int> pair2("Gupta",2);  //2
   m.insert(pair2);

   m["My"]=1;  //3 //creation
   m["My"]=5;  //updation

   //search
   cout<<m["My"]<<endl; //1

   cout<<m.at("prerna")<<endl;
//    cout<<m.at("unkown")<<endl;
      cout<<m["unknown"]<<endl;//entry is created for unkown key

      
     //size
     cout<<m.size()<<endl;

     //to check presence
     cout<<m.count("bro")<<endl;

     //erase//delete
     m.erase("prerna");
     cout<<m.size()<<endl;

     for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
     }

     //iteratir
     unordered_map<string,int> ::iterator it=m.begin();
     while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
     }



   return 0;

  
}