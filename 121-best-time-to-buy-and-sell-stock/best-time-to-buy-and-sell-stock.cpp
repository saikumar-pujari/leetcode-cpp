class Solution {
public:

    int maxProfit(vector<int>& prices) {
       int mini=prices[0];
       int profit=0;
       for(int i=0;i<prices.size();i++){
        int sum=prices[i]-mini;
        profit=max(sum,profit);
        mini=min(mini,prices[i]);
       } 
       
       return profit;
    }
};