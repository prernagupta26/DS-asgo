#include "bits/stdc++.h"
using namespace std;

int maxProfit(vector<int>& prices) {
        
        int mini=INT_MAX;
      int profit=0;
        
        for(int i=0;i<prices.size();i++){//traversing array
            mini=min(mini,prices[i]);//minimum element(price)
            profit=max(profit,prices[i]-mini);//max profit
                        //current price-minimum price
        }
       return profit;
    }