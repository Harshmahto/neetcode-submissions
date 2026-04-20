class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {

        const uniqueE = new Set(nums);

        return uniqueE.size !== nums.length;
    }
}
