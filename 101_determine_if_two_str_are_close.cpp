class Solution {
public:
    bool closeStrings(string word1, string word2) {

        vector<int>w1(26,0);
        vector<int>w2(26,0);

        if(word1.size()!= word2.size()){
            return false;
        }
        int n = word1.size();

        for(char c : word1){
            w1[c - 'a']++;
        }
        for(char c : word2){
            w2[c - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if ((w1[i] == 0 && w2[i] != 0) || (w1[i] != 0 && w2[i] == 0)) {
                return false;
            }
        }

        sort(w1.begin(),w1.end());
        sort(w2.begin(),w2.end());

        return w1 == w2;


    }
};