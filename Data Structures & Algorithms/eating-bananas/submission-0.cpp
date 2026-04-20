class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int i = 1;
        int j = *max_element(piles.begin(),piles.end());
        int ans = j;

        while(i <= j){
            int m = i + (j-i)/2;
            int timet = 0;

            for(int p:piles){
                timet += (p + m - 1) / m; 
            }

            if(timet<=h){
                ans = m;
                j = m-1;

            }else{
                i = m+1;
            }
        }

        return ans;
    }
};