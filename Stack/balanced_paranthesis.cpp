#include<bits/stdc++.h>
using namespace std;


bool isValid(string s){
    int n=s.size();

    stack<char> st;

    bool ans=true;
    for(int i=0;i<n;i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='(' ){
            st.push(s[i]);  //push opening brackets in stack
        }

        else if(s[i]=='}'){

            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                ans=false;
                break;

            }
        }

        else if(s[i]==']'){

            if(!st.empty() && st.top()=='['){
                st.pop();
            }
            else{
                ans=false;
                break;

            }
        }
   
        else if(s[i]==')'){

            if(!st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                ans=false;
                break;

            }
        }
    }
  
  if(!st.empty()){
    return false;
  }
  else{
    return ans;
  }


}




int main(){
    string s="{(4+2)*5*(5+7*[9-3])}";

    if(isValid(s)){
        cout<<"valid string"<<endl;
    }
    else{
        cout<<"invalid string"<<endl;
    }
  

    return 0;
}