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
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        for (int i = 0; i < n; ++i) {
            if (nums[abs(nums[i]) - 1] > 0)
                nums[abs(nums[i]) - 1] *= -1;
            else 
                result.push_back(abs(nums[i]));
        }
        return result;
    }
};