class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_map<int, int> elementCounts;
        // for (const int ele : nums) {
        //     if (elementCounts.find(ele) == elementCounts.end()){
        //         elementCounts[ele]++;
                
        //     }else{
        //         return ele;
        //     }

        
        // }

        // return -1;

        int slow = 0;
        int fast = 0;

        // while(true){
        //     slow = nums[slow];
        //     fast = nums[nums[fast]];

        //     if(slow==fast){
        //         break;
        //     }
        // }


        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);
        fast = 0;
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }


        return slow;
    }
};
