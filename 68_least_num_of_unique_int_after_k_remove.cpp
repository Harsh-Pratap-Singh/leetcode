class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> freq;
        for (int num : arr)
            freq[num]++;
        
        vector<int> counts;
        for (auto& pair : freq)
            counts.push_back(pair.second);
        
        sort(counts.begin(), counts.end());
        
        int uniqueCount = counts.size();
        for (int i = 0; i < counts.size(); ++i) {
            if (k >= counts[i]) {
                k -= counts[i];
                uniqueCount--;
            } else {
                break;
            }
        }
        
        return uniqueCount;
    }
};
