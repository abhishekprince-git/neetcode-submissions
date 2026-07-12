class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;

        unordered_set<char> set;
        int maxlen = 0;

        while(r<s.size()){
            while(set.find(s[r])!=set.end()){
                set.erase(s[l]);
                l++;
                
            }

            set.insert(s[r]);
            maxlen = max(maxlen , (r-l+1));

            r++;
        }

        return maxlen;


    }
};
