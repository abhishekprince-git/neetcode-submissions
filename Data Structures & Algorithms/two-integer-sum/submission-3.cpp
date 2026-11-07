class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //i = 0, target = 7 ,nums[i] = 3, need  = 4 search for 4 in array if found return the iterator.
        // if not found nums[i+1], need = target - nums[i] same. \
        //first approach : 
        /*int n = nums.size();
        int need;
        for(int i : nums){
            need = target - i;
            // we will apply linear search which will not be effective

        }*/
        //second approach : create a map , key -> element, value -> need 
        //iterate through each element if need exist in map return index of both.

        // in this approach if duplicate element exists value is goint to overwrite
        /*
        map<int,int> mp;
        for(int i = 0; i<nums.size();i++){
            mp[nums[i]] = i;
        }
        for(auto it: mp){
            if(mp.find(target - it) != mp.end()){
                return {mp[it].second , mp[target-it]};
            }
        }*/
        map<int, int> mp;
        for(int i = 0; i<nums.size(); i++){
            int need = target - nums[i];

            if(mp.find(need) != mp.end()){
                return {mp[need],i};
            }

            mp[nums[i]] = i;
        }
        
        
    }
};
