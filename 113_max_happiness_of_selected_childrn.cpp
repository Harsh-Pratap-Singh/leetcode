class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.begin(),h.end(),greater<int>());
        long long ans = 0;
        
        int i = 0;
        while(k){
            h[i] = max(h[i] - i, 0);
            ans += h[i++];
            k--;
        }
        return ans;
    }
};