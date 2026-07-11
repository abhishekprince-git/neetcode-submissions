class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {
            
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int l = i + 1;
            int r = nums.size() - 1;
            int need = 0 - nums[i];

            while (l < r) {
                int curr = nums[l] + nums[r];
                if (curr < need) {
                    l++;
                }
                if (curr > need) {
                    r--;
                }
                if (curr == need) {
                    ans.push_back({nums[i], nums[l], nums[r]});

                    l++;
                    r--;

                    while (l<r&&nums[l] == nums[l - 1]) {
                        l++;
                    }
                    while (l<r&&nums[r] == nums[r + 1]) {
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};
