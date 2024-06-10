class Solution {
public:
    string compressedString(string word) {
        int cur = 1;
        char cr = word[0];
        string ans = "";
        for(int i = 1;i < word.size();i ++){
            if(word[i] != word[i - 1] || cur == 9){
                ans += cur + '0';
                ans += cr;
                cr = word[i];
                cur = 1;
            }
            else{
                cur++;
            }
        }
        ans += cur + '0';
        ans += cr;
        return ans;
    }
};