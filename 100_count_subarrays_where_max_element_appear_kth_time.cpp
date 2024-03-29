class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int a = *max_element(nums.begin(),nums.end());
        int n = nums.size();
        int cur = 0;
        int i = 0;

        long long res = 0;

        for(int j = 0;j < n;j ++){
            if(nums[j] == a){
                cur ++;
            }
            while(cur >= k){
                if(nums[i++] == a){
                    cur --;
                }
            }
            res += i;
        }
        return res;
    }
};