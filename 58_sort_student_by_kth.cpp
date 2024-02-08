class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score.size();
        vector<int> temp(n);
        for(int i = 0;i < n; i++){
            temp[i] = score[i][k];
        }
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());

        vector<vector<int>> ans;
        int i = 0;
        int j = 0;
        while(i<n){
            if(temp[i] == score[j][k]){
                ans.push_back(score[j]);
                i++;
                j = 0;
            }
            else{
                j++;
            }
        }
        return  ans;
    }
};