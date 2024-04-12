class Solution {
public:
    int nextGreaterElement(int n) {
       string cur = to_string(n);
       next_permutation(cur.begin(),cur.end());

       int ans = stoll(cur);
       return (ans > INT_MAX || ans <= n) ? -1:ans;
    }
};