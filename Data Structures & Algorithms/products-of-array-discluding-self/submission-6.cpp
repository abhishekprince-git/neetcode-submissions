class Solution {
public:

    vector<int> productExceptSelf(vector<int>& nums) {
        //take product of all the nums elment
        int prod = 1;
        int n = nums.size();

        vector<int> prefix(n,1);
        vector<int> suffix(n,1);
        for(int i = 1; i<n; i++){
            prod= prod*nums[i-1];
            prefix[i]=prod;//stores prefix product except current index
        }
        prod = 1;
        for(int i = n-2; i>=0; i--){
            prod = prod*nums[i+1];// suffix product stores
            suffix[i] = prod;
        }
        vector<int> ans(n);
        for(int i = 0;i<n; i++){
            ans[i]=(prefix[i]*suffix[i]);
        }
        return ans;
        //n = 4
       //prefix= [1,1,2,8] 
       //suffix= [1,6,24,48]
       //suffix= [48,24,6,1]
    }
};
