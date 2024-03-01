class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i = 1;i < nums.size() ;i++){
            while(nums[i-1] >= nums[i]){
                ans ++;
                nums[i]++;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i = 1;i < nums.size() ;i++){
            if(nums[i-1] >= nums[i]){
                int cur = nums[i - 1] + 1 - nums[i];
                nums[i] += cur;
                ans += cur;
            }
        }
        return ans;
    }
};