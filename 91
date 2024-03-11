class Solution {
public:
    int maxProfit(vector<int>& p) {
        int ans = 0;
        int x = 0;
        for(int i = 1;i < p.size();i++){
            if(p[i] < p[i-1] ){
                ans += p[i - 1] - p[x];
                x = i;
            }
            else if(i == p.size() -1){
                ans += p[i] - p[x];
            }
        }
        return ans;
    }
};