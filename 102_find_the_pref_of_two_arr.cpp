class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        int cur = 0;
        vector<int> cnt(n + 1,0);
        vector<int> ans;

        for(int i = 0;i < n;i ++){
            cnt[A[i]] ++;
            cnt[B[i]] ++;

            if(cnt[A[i]] == 2 ){
                cur++;
            }
            if(A[i] == B[i]){
                cur--;
            }
            if(cnt[B[i]] == 2){
                cur++;
            }
            ans.push_back(cur);
        }
        return ans;
    }
};