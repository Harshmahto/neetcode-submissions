class Solution {
public:
    int findMin(vector<int>& nums) {
        int res = nums[0];
        int l = 0;
        int r = nums.size() - 1;

        while (l <= r) {
            // If the current search space is already sorted
            if (nums[l] < nums[r]) {
                res = std::min(res, nums[l]);
                break;
            }

            int m = l + (r - l) / 2;
            res = std::min(res, nums[m]);

            // Determine which half to search
            if (nums[m] >= nums[l]) {
                // Left side is sorted, minimum must be on the right
                l = m + 1;
            } else {
                // Right side is sorted, minimum must be on the left
                r = m - 1;
            }
        }

        return res;
    }
};