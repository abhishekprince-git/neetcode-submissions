class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        for (int num : nums) {
            s.insert(num);
        }
        if (s.size() != n) {
            return true;
        } else {
            return false;
        }
    }
};