class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int idx = 1;
        int n = nums.size();
        for(int i = 0;i < n;i++){
            if(nums[i] < 0){
                nums[i] = 0;
            }
        }
        for(int i = 0;i < n;i ++){
            int x = nums[i] - 1;
            if(x >= 0 && x < n){
                if(nums[x] > 0){
                    nums[x] *= -1;
                }
            }
        }
        int ans = 1;
        for(int i = 0;i < n;i++){
            if(nums[i] > 0){
                break;
            }
            else{
                ans++;
            }
            
        }

        return ans;
    }
};