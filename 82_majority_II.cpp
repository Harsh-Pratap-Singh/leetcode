class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>cnt(nums.size());
        for( auto i: nums){
            cnt[i]++;
        }
        int n = nums.size() /3;
        vector<int>ans;
        for(auto i : cnt){
            if(i.second > n){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};