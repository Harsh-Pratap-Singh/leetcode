class Solution {
public:
    static bool comp(pair<int, int> p1, pair<int, int> p2) {
    return p1.second < p2.second;
}
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>> plt;
        
        int n = plantTime.size();
        
        for( int i = 0 ;i < n; i ++){
            
            plt.push_back(make_pair(plantTime[i],growTime[i]));
        }
        sort(plt.begin(),plt.end(),comp);
        
        int dayg = 0 ;
        int day = 0;
        int ans = 0;
        for( int i = n -1 ;i >= 0 ;i --){

            day += plt[i].first;
            dayg =max(dayg, plt[i].second + day) ; // this is useless as we can just take max of ans = max(ans,plt[i].second)
            ans = max(day,dayg);


        }
         return ans;
    }

};