class Solution {
public:
    bool isAnagram(string s, string t) {
        // first approach: sort it and see if s and t are equal or not
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s == t){
            return true;
        }
        else{
            return false;
        }

    }
};
