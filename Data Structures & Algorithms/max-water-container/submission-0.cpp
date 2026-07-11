class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int r= n-1;
        int l = 0;
        int ans=0;

        while(l<r){
            ans = max(ans, min(heights[l],heights[r])*(abs(l-r)));
            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return ans;
        

        

    }
};
 







































