#include <bits/stdc++.h>
using namespace std;


int countPrimes(int n) {
        if(n==0 || n==1){
            return 0;
        }
        vector<bool>prime(n,true);
        prime[0]=false;
        prime[1]=false;
        
        //1st loops traversing all no.
        for(long long i=2;i<n;i++){
            if(prime[i]){
                //second loops marking the multiples of that no.
                for(long long j=i*i;j<n;j+=i){//j+=i//for multiples of i
                    prime[j]=false;
                }
            }
        }
        
        //all unmarked elments are prime no.
        int count=0;
        for(int i=2;i<n;i++){
            if(prime[i]){
                count++;
            }
        }
        return count;
    }