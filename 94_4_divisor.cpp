class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int m = 0;
        for(auto i : nums){
            m = max(i,m);
        }
        vector<pair<int,int>>sv(m + 1, {1,1});

        for(size_t i = 2;i <= m; ++i){
            for(size_t j = i;j <= m;j += i){
                sv[j].first++;
                sv[j].second += i;
            }
        }
       
        int ans = 0;
        for(auto i : nums){
            if(sv[i].first == 4){
                ans += sv[i].second;
            }
        }
        return ans;
    }
};