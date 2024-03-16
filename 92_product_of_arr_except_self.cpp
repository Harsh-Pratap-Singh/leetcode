class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n=v.size();
        vector<int>l(n,1);
        vector<int>r(n,1);
        for(int i=1;i<n;i++){
            l[i]=l[i-1]*v[i-1];
            r[i]=r[i-1]*v[n-i];
        }
        vector<int>ans(n,1);
        for(int i=0;i<n;i++){
            ans[i]=l[i]*r[n-i-1];
        }
        return ans;
    }
};