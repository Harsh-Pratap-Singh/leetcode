class Solution {
public:
    
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0;
        int p = power;

        
        sort(tokens.begin(),tokens.end());
        int i = 0;
        int j = tokens.size() - 1;

        int ans = score;
        while(i <= j){
            if(tokens[i] <= p){
                p -= tokens[i];
                score++;
                i++;
                ans = max(ans,score);
            }
            else if(score > 0){
                score--;
                p += tokens[j];
                j--;

            }
            else{
                break;
            }   
        }
        
        return ans;
    }
};