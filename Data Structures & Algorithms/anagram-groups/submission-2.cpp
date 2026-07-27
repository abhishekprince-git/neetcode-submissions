class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        for (auto& s : strs) {
            vector<int> freq(26, 0);
            for (auto c : s) {
                freq[c - 'a']++;
            }

            string key = "";
            for (int i = 0; i < 26; i++) {
                key += to_string(freq[i]) + '#';
            }
            hash[key].push_back(s);
        }
        vector<vector<string>> result;
        for (auto& pair : hash) {
            result.push_back(pair.second);
        }
        return result;
    }
};