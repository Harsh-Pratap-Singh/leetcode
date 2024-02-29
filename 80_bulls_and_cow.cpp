class Solution {
public:
    string getHint(string secret, string guess) {
        int hash[256];
        int cow = 0;
        int bull = 0;
        int n = secret.size();

        for(int i = 0;i < n;i++){
            if(secret[i] == guess[i]){
                bull++;
            }
        }
        for(auto i:secret){
            hash[i]++;
        }
        for(int i = 0;i < n;i++){
            if(hash[guess[i]] > 0){
                cow++;
                hash[guess[i]]--;
            }
        }
        cow -= bull;
        string ans = to_string(bull) + 'A' + to_string(cow) + 'B';
        return ans;
    }
};