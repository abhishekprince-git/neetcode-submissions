class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // array is sorted in ascending order 
        // 1-indexed array
        //index1+index2 = target index1<index2
        //index1!=index2
        // thenn i can store number in hash maps keeping index and looking up for
        //need
       /* map<int,int> mp;// key = element value = index
        for(int i = 0; i<numbers.size();i++){
            mp[numbers[i]] = i;
        }
        for(int i = 0; i<numbers.size(); i++){
            int need = target - numbers[i];
            if(mp.find(need)!=mp.end() && mp[need]!=i){
                return {i+1 , mp[need]+1};
            }
        }
        return {};
        */
        int left = 0;
        int right = numbers.size()-1;
        
        while(left<right){
            int sum = numbers[left]+numbers[right];
            if(sum==target){
                return{left+1,right+1};
            }
            if(sum<target){
                left++;
            }
            if(sum>target){
                right--;
            }
        }
        return {};
    }
};
