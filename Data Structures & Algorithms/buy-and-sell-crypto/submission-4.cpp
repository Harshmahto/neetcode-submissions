class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // auto it = min_element(prices.begin(),prices.end());
        // int index = distance(prices.begin(),it);
        // int maxProfit=0;
        // if(index == prices.size()-1) return maxProfit;
        // for(int i = index;i<prices.size()-1;i++){
        //     if(prices[index]<prices[i+1]){
        //         maxProfit = max(maxProfit,prices[i+1]-prices[index]);
        //     }
        // }

        // return maxProfit;

        // int i = 0;
        // int n = prices.size();
        // int j = n-1;
        // int maxProfit=0;
        // while(i<j){
        //     if(prices[i]<prices[j]){
        //         maxProfit = max(maxProfit, prices[j]-prices[i]);
        //         j--;
        //     }else if(prices[i]==prices[j]){
        //         j--;
        //     }else{
        //         i++;
        //     }
        // }

        // return maxProfit;

        int i = 0;
        int n = prices.size();
        int j = i+1;
        int maxProfit=0;
        while(j<n&&i<n){
            int val = prices[j]-prices[i];
            if(val<0){
                i=j;
                j=i+1;
                continue;
            }
            if(val>maxProfit){
                maxProfit = val;
            }
            j++;
        }
        return maxProfit;
    }
};
