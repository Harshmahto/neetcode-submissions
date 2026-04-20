class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0); // Initialize with 0s
        stack<int> s; // This will store indices

        for (int i = 0; i < n; i++) {
            // Check if the current day is warmer than the days stored in the stack
            while (!s.empty() && temperatures[i] > temperatures[s.top()]) {
                int prevIndex = s.top();
                s.pop();
                ans[prevIndex] = i - prevIndex; // Calculate the difference in days
            }
            s.push(i); // Push current index onto the stack
        }

        return ans;
    }
};