class Solution {
   public:
    bool caneat(int k, vector<int>& piles, int h) {
        int totalhour = 0;
        for (int pile : piles) {
            totalhour += (pile + k - 1) / k;
        }
        if (totalhour <= h) {
            return true;
        } else {
            return false;
        }
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (caneat(mid, piles, h)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
