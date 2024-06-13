class Solution {
public:
    
    string clearStars(string s) {
        auto comp = [](const pair<int, int>& a, const pair<int, int>& b){  
        if(a.first == b.first) return a.second < b.second;
        return a.first > b.first;
        };
        vector<int>cnt(s.size(),-1);
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comp)> pq;

        int k = 0;
        for(int i = 0;i < s.size();i ++){
            
            if(s[i] == '*'){
                int x = -1*pq.top().first;
                int y = pq.top().second;
                pq.pop();
                cnt[y] = -1;
            }
            else{
                int j = (s[i] - 'a');
                cnt[i] = j;
                pq.push(make_pair(j,i));
                
            }
            
        }
        string ans = "";
        for(auto i:cnt){
           if(i >= 0){
            ans += i+'a';
           }
        }
        return ans;
        
    }
};