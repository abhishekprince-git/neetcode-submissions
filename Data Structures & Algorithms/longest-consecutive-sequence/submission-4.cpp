class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // initial thouughts: store these values in a map
        // lookup for the numbers i.e exactly 1+number
        // if i get count increases by 1
        // do this for every number 
        // highest number of count will be my answer
        // we can change the positions of elements
        // what if i sort the elements and check 
        // sorted element = 2 3 4 4 5 10 20 
        // if next element is exactly greater by 1 count++.

        /*2 3 4 4 5 10 20
        0 1 2 3 4 5  6
        i = 0 n1 = 3 n0 = 2 count=2 
        i=1 n2 =4 n1 3 count =3
        i=2 n3 = 4 n2 =4 skip
        i=3 n4 = 5 n3 =4 count = 4
        i=4 n5 = 10 n4 = 5 skip
        i=5 n6 = 20 n5 = 10 skip
        print count
        */
        /*0 1 1 2 3 4 5 6
        0 1 2 3 4 5 6 7 

        i=0 n1=1 n0=0 count=2 
        i=1 n2=1 n1=1 skip
        i=2 n3=2 n2=1 count=3
        i=3 n4=3 n3=2 count=4
        i=4 n5=4 n4=3 count=5
        i=5 n6=5 n5=4 count=6
        i=6 n7=6 n6=5 count=7
        */

        sort(nums.begin(),nums.end());
        int count = 1;
        int ans =1;
        if(nums.size() ==0){
            return 0;
        }
        for(int i = 0; i< nums.size()-1; i++){
            if(nums[i+1] == nums[i]){
                continue;
            }
            if(nums[i+1] == nums[i]+1){
                count++;
            }
            else{
                count = 1;
            }
            ans = max(ans,count);
        }
        
        return ans;
    }
};
