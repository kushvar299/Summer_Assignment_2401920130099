class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int profit=0;
        int maxi=0;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            profit=prices[i]-mini;
            maxi=max(maxi,profit);
        }
        return maxi;
    }
};