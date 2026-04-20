class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> c;
        for(auto& i:nums){
            c[i]++;
        }

        vector<pair<int, int>> sortedVec(c.begin(), c.end());

        sort(sortedVec.begin(),sortedVec.end(),[](pair<int,int>&a,pair<int,int>&b){
            return a.second > b.second;
        });

        vector<int> ans;

        for(int i=0;i<k;i++){
            ans.push_back(sortedVec[i].first);
        }

        return ans;
    }
};
