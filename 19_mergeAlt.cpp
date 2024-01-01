class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int k = 0, i = 0, j = 0;

        while (i < word1.length() && j < word2.length()) {
            if (k % 2 == 0) {
                res += word1[i++];
            } else {
                res += word2[j++];
            }
            k++;
        }

        while (i < word1.length()) {
            res += word1[i++];
            k++;
        }

        while (j < word2.length()) {
            res += word2[j++];
            k++;
        }

        return res;
    }
};