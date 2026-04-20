class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total = 1;
        for(int i=0;i<nums.size();i++){

            if(nums[i]==0){
                continue;
            }
            total*=nums[i];

        }

        if(count(nums.begin(),nums.end(),0)>1){
            vector<int>ans(nums.size(),0);
            return ans;
        }

        auto ifzero = find(nums.begin(), nums.end(), 0);

        if (ifzero != nums.end()) {
            int index = distance(nums.begin(), ifzero); 
            vector<int> ans(nums.size(), 0);
            ans[index] = total; 
            return ans;
        } else {
            vector<int> ans;
            for(int i = 0; i < nums.size(); i++) {
                int newTotal = total / nums[i]; 
                ans.push_back(newTotal);
            }
            return ans;
        }

    }
};
