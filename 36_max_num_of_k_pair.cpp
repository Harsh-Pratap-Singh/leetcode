class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans = 0;
        sort(nums.begin(),nums.end());
        int m = nums.size();
        int l = 0 ;
        int r = m-1;
        while(r>l){
            if(nums[l]+nums[r]==k){
                ans++;
                l++;
                r--;
            }
            else if(nums[l]+nums[r]>k){
                r--;
            }
            else l++;
        }
        return ans;
    }
};
