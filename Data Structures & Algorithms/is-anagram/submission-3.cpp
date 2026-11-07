class Solution {
public:
    bool isAnagram(string s, string t) {
        // first approach: sort it and see if s and t are equal or not
        /*sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s == t){
            return true;
        }
        else{
            return false;
        }*/
        //second approach: check two times 1st time : count no of element 
        // 2nd time: decrease the count when same elment is found
        //after both loop count becomes 0 its an anagram.
        map<char , int> mp; // key -> element of string  , value -> total count
        for(auto it : s){
            mp[it]++;
        }
        for(auto it : t){
            mp[it]--;
        }
        for(auto it : mp){
            if(it.second != 0){
                return false;
            }
        }

        return true;

    }
};
