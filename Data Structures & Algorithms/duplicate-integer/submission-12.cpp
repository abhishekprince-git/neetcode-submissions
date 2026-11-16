class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int> s; // store the uniques values of nums in s then we will compare with the size if any duplicate value exists size of nums and s will not be equal.
        for(int i = 0; i<n;i++){
            s.insert(nums[i]);
        }
        if(s.size()== n){
            return false;
        }
        else{
            return true;
        }
    }

};