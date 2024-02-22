class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>tr(n+1,0);
        vector<int>tobe(n+1,0);
        for(auto i: trust){
            tr[i[0]]++;
            tobe[i[1]]++;
        }
        for(int i = 1;i<tr.size();i++){
            if(tobe[i] >= n-1 && tr[i] == 0){
                return i;
            }
        }
        return -1;

    }
};