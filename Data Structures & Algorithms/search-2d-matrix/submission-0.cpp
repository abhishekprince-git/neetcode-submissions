class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();     
        int m = matrix[0].size();  
        for (int i = 0; i < n; i++) {
            int l = 0;
            int h = m - 1;
            while (l <= h) {
                int mid = l + (h - l) / 2;
                if (matrix[i][mid] == target) {
                    return true;
                }
                if (matrix[i][mid] < target) {
                    l = mid + 1;
                } else {
                    h = mid - 1;
                }
            }
        }
        return false;
    }
};
