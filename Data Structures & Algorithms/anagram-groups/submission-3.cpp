class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        

        // sort the string check in map if sorted string exist store the string in that keyas value. else create a new key.
        //then in the end return the value of each key.
       /* map<string, vector<string>> mp;
        vector<string> newstrs; // original vector was getting lost

        for(int i = 0; i<strs.size(); i++){
            newstrs.push_back(sort(strs[i].begin(),strs[i].end())); // first sorted the element from strs
            if(mp.find(newstrs[i]) != mp.end()){ //check if the sorted element exist or not
                mp[newstrs[i]].push_back(strs[i]); // if exists sorted element = key , string = value
            }
            else{// add to the map as key
                mp[i].push_back(newstrs[i]);
            }
        }
        for(int i = 0; i<mp.size(); i++){
            return mp[i].second;
        }
        */
        /*Second Approach : count frequency and use array as key in map and store the strings with same array.
        A1 B0 C1 D0 E0 F0 G0 H0 I0 J0 K0 L0 M0 N0 O0 P0 Q0 R0 S0 T1 U0 V0 W0 X0 Y0 Z0 
        A0 B0 C1 D0 E0 F0 G0 H0 I0 J0 K0 L0 M0 N0 O1 P1 Q0 R0 S1 T1 U0 V0 W0 X0 Y0 Z0
        A0 B0 C1 D0 E0 F0 G0 H0 I0 J0 K0 L0 M0 N0 O1 P1 Q0 R0 S1 T1 U0 V0 W0 X0 Y0 Z0 
    */
    map<vector<int>,vector<string>>mp;
    for(int i = 0; i<strs.size();i++){
        vector<int> a(26,0); // for storing frequency
        for(int j = 0; j<strs[i].size();j++){
            a[(strs[i][j] - 'a')]++; // indexing of the elements
        }
            mp[a].push_back(strs[i]); // key = array , value = string
    }
    vector<vector<string>> ans; // 2d vector for stpring final array 
    for(auto it: mp){
        ans.push_back(it.second);
    }
    return ans;
    }   
};
