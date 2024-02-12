class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(),processorTime.end());
        sort(tasks.begin(),tasks.end(),greater<int>());
        int n = tasks.size();
        int m = processorTime.size();
        int cur = 0;
        int j = 0;
        int temp = 0;

        vector<int>ts(m,0);

        for(int i = 0;i < n;i++){
            cur++;
            ts[j] = max(tasks[i] + processorTime[j],ts[j]);
            if(cur == 4){
                cur = 0;
                j++;
                temp = 0;
            }
        }
        int ans = 0;
        for(int i  = 0;i < processorTime.size();i++){
            ans = max(ans,ts[i]);
            printf("%d   ",ts[i]);
        } 
        return ans;
    }
};