class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> counts;
        for(int num:nums){
            if(counts.find(num)!=counts.end()){
                return true;
            }else{
                counts[num]++;
            }
        }
        return false;
    }
};