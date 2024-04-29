class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        for(int i : nums){
            k ^= i;
        }
        int ans = __builtin_popcount(k);
        return ans;
    }
};