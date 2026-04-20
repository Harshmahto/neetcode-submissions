class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;

        int m = matrix.size();
        int n = matrix[0].size();
        
        // Treat the 2D matrix as a 1D array from 0 to (m*n - 1)
        int left = 0;
        int right = m * n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            // Map 1D 'mid' back to 2D coordinates
            int midRow = mid / n;
            int midCol = mid % n;
            int midValue = matrix[midRow][midCol];

            if (midValue == target) {
                return true;
            } else if (midValue < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return false;
    }
};