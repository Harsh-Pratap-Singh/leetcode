class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool>isprime(n,true);
        isprime[0] = false;
        isprime[1] = false;
        
        int x = sqrt(n);

        for(int i = 2;i <= x;i++){
            if(isprime[i]){
                for(size_t j = 2;j*i < n;j++){
                    isprime[i*j] = false;
                }
            }
        }
        vector<vector<int>>ans;
        for(int i = 2;i <= n/2;i++){
            if(isprime[i] && isprime[n - i] ){
                ans.push_back({i,(n-i)});
            }
        }
        
        return ans;
    }
};