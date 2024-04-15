class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans = 0;
        heights.push_back(0);
        vector<int>index;
    
        int n = heights.size();

        for(int i = 0;i < n; i++){
            while(index.size() > 0 && heights[index.back()] >= heights[i]){

                int h = heights[index.back()];
                index.pop_back();

                int s = index.size() > 0 ? index.back() : -1;
                ans = max(ans,h*(i - s - 1));
            }
            index.push_back(i);
        }
        return ans;
    }
};