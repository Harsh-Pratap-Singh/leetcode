class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int cnt[2] = {};
        for(auto i : position){
            cnt[i%2]++;
        }
        return min(cnt[0],cnt[1]);
    }
};