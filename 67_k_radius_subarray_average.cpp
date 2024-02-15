class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int x = 2*k + 1;
        int n = nums.size();
        vector<int> ans(n,-1);

         if (x > n){
            return ans;
        }
        long long sum = 0;
        for(int i = 0;i < x;i++){
            sum += nums[i];
        }

        ans[k] = sum/x;

        for(int i = k+ 1; i < n-k;i++){
            sum += -nums[i -k -1] + nums[i + k]; 
            ans[i] = sum/x;
        }
        return ans;
    }
};

