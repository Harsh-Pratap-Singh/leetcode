class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int>dif(s.size(),0);
        for(int i = 0;i < s.size();i ++){
            dif[i] = abs(s[i]- t[i]);
        }

        int i = 0;
        int j = 0;
        int ans = 0;
        int cur = 0; 

        while (j < s.size()) {
            cur += dif[j]; 
            while (cur > maxCost) {
                cur -= dif[i];  
                i++;  
            }

            ans = max(ans, j - i + 1);

            j++;  
        }

        return ans;
    }
};