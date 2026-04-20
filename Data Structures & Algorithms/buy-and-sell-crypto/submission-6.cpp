class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int n = prices.size();
        int j = i+1;
        int maxProfit=0;
        while(j<n){
            int val = prices[j]-prices[i];
            if(val<0){
                i=j;
                j=i+1;
                // continue;
            }else{

                if(val>maxProfit){
                    maxProfit = val;
                }
                j++;
            }
        }
        return maxProfit;
    }
};
