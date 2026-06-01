class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> elementCounts;
        for (const int ele : nums) {
            if (elementCounts.find(ele) == elementCounts.end()){
                elementCounts[ele]++;
                
            }else{
                return ele;
            }

        
        }

        return -1;
    }
};
