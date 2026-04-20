class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        vector<int> ans;
        while(left!=right){

            int val = numbers[left]+numbers[right];

            if(val==target){
                ans = {left+1,right+1};
                return ans;
            }else if(val>target){
                right--;
            }else if(val<target){
                left++;
            }
        }

        return ans;
    }
};
