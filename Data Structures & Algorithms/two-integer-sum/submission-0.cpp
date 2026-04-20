class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> counts;
        for(int i=0;i<nums.size();i++){
            int element = target - nums[i];

            if(counts.find(element)!=counts.end()){
                return {counts[element],i};
            }

            counts[nums[i]] = i;
        }
        return {};
    }
};
