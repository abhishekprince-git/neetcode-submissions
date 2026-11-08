class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // count the frequency of each element of nums using maps
        map<int,int> mp; // key = element , value = no of frequencies.
        for(auto it : nums){
            mp[it]++;
        }
        vector<pair<int,int>> v(mp.begin(),mp.end());// converting to vector cause cannot perform sort in map directly
        sort(v.begin(),v.end(),[](auto &a , auto &b){
            return a.second > b.second;
        });// sorted on the basis of value in descending order so that we can get the max frequent keys in top
        vector<int>ans;
        for(int i = 0; i<k; i++){
            ans.push_back(v[i].first);// pushing the key in final vector till i<k.
        }
        return ans;
    }
};
