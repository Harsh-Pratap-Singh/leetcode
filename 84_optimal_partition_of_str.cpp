class Solution {
public:
    int partitionString(string s) {
        vector<int>cnt(26,0);
        vector<int>n(26,0);
        int x = 1;
        for(auto i:s){
            if(cnt[i - 'a'] > 0){
                
                cnt = n;
                x++;
                cnt[i - 'a']++;
            }
            else{
                cnt[i - 'a']++;
            }
            
        }
        return x ;
        
    }
};