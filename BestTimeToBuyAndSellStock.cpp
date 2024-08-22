#include<iostream>
#include<vector>
#include <limits.h>
using namespace std;

class Solution{
public:
    int maxProfit(vector<int> & prices){
        int lowestPrice = INT_MAX, maxiProfit = 0;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lowestPrice){ 
                lowestPrice = prices[i];
            }
            else if(prices[i] - lowestPrice > maxiProfit){
                maxiProfit = prices[i] - lowestPrice;
            }
        }
        return maxiProfit;
    }
};

int  main(){
    Solution obj;
    vector<int> prices = {2,4,1};
    int answer;

    answer = obj.maxProfit(prices);
    cout << answer;

    return 0;
}