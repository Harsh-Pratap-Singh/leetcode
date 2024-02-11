class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
       vector<int>lar(nums.size(),0);
       lar[0] = nums[0];

       for(int i = 1;i < nums.size();i++){
           lar[i] = max(nums[i],lar[i-1]);
       } 
       vector<long long> con(nums.size(),0);

       for(int i = 0;i < nums.size() ;i++){
           con[i] = nums[i] + lar[i];
       }

       vector<long long>ans(nums.size(),0);

        ans[0] = con[0];

       for(int i = 1;i < nums.size();i++){
           ans[i] = con[i] + ans[i-1];
       }
       return ans;
    }
};