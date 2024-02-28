class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       unordered_map<int,int>cnt(nums.size());
       for(auto i:nums){
           cnt[i]++;
       } 
       vector<int>ans;
       for(auto i:cnt){
           if(i.second > 1){
               ans.push_back(i.first);
           }
       }
       return ans;
    }
};