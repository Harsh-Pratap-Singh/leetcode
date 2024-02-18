class Solution {
public:
    bool isvow(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                return true;
            }
        return false;
    }
    int maxVowels(string s, int k) {
       int ans = 0;

       for(int i = 0;i<k;i++){
           if(isvow(s[i])){
               ans++;
           }
       }
       int cur = ans;

       for(int i = k;i<s.size();i++){
           if(isvow(s[i-k])){
               cur--;
           }
           if(isvow(s[i])){
               cur++;
           }
           ans = max(ans,cur);
       }
       return ans;
    }


};