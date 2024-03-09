class Solution {
public:
    bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>cnt(nums.size());
        for(auto i:nums){
            cnt[i]++;
        }
        vector<pair<int, int>> cnt2(cnt.begin(), cnt.end());

        sort(cnt2.begin(), cnt2.end(), [this](const pair<int, int>& a, const pair<int, int>& b) {
            return cmp(a, b);
        });


        vector<int>ans(k);
        for(int i = 0;i<k;i++){
            ans[i] = cnt2[i].first;
        }
        return ans;
    }
};