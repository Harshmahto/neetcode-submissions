class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size()-1;
        int maxArea = 0;
        while(i<j){
            maxArea = max((j-i)*(min(heights[i],heights[j])),maxArea);
            if(heights[i]<heights[j]){
                i++;
            }else{
                j--;
            }
        }

        return maxArea;
        
    }
};
