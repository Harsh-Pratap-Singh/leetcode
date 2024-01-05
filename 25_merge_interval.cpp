class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end());
        
        for (int i = 0; i < intervals.size(); i++) {
            for (int j = i + 1; j < intervals.size(); j++) {

                if (intervals[i][1] >= intervals[j][0] && intervals[i][0] <= intervals[j][1]) {
                    intervals[i][0] = min(intervals[i][0], intervals[j][0]);
                    intervals[i][1] = max(intervals[i][1], intervals[j][1]);
                    
                    intervals.erase(intervals.begin() + j);
                    j--;
                }
            }
        }
        return intervals;
    } 
};
