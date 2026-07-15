class Solution {
public:
int robb(vector<int> &nums, int start, int end){
    int next = 0; int nextnext = 0;
    for(int i = end; i>=start; i--){
        int curr = max(nums[i]+nextnext,next);
        nextnext = next;
        next = curr;
    }
    return next;
}
    int rob(vector<int>& nums) {

        int n = nums.size();
        
        if(n == 1){
            return nums[0];
        }

        int ans1 = robb(nums,0,n-2);
        int ans2 = robb(nums,1, n-1);

        return max(ans1,ans2);
    }
      
};
