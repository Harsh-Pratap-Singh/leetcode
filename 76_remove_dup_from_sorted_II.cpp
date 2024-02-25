class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ind = 0;
        for(int num : nums){
            if(mp[num] < 2){
                mp[num]++;
                nums[ind] = num;
                ind++;
            }
        }
        return ind;
    }
};