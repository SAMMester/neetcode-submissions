class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int j = 0;
        int i = 1;
        int maxprofit = 0;
        while(i < prices.size()){
            if(prices[i] > prices[j]){
                int pro = prices[i] - prices[j];
                maxprofit = max(maxprofit, pro);
            }
            else{
                j = i;
            }
            i++;
        }

        return maxprofit;
    }
};
