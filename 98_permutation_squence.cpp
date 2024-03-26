class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>cnt(n);
        for(int i = 0;i < n;i++){
            cnt[i] = i+1;
        }

        int i = 0;
        while(i < k - 1){
            next_permutation(cnt.begin(),cnt.end());
            i++;
        }
        string ans = "";
        for(auto k : cnt){
            string a = to_string(k);
            ans += a[0];
        }
        return ans;
    }
};