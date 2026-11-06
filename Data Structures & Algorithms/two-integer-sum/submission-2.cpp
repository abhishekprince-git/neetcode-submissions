class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        //  mp -> value required for the current element to become a pair.. 
        // second element is the inix of the first element of the pair. 


        mp[target - nums[0] ] = 0;
        for (int i = 1; i < nums.size(); i++){
            if(mp.count(nums[i])){
                vector<int> ans = {mp[nums[i]], i};
                return ans;
            }
            mp[ target - nums[i] ] = i;
        }
        // vector<int> v;
        // return v;
    }
};
