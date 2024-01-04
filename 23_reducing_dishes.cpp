class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {

        int res, pre = 0;
        sort( satisfaction.begin(),satisfaction.end());

        for(int i = satisfaction.size()-1; i >= 0;i--){
            pre +=satisfaction[i];
            if(pre<0){
                break;
            }
            res+=pre;
        }
        return res;
        
    }
};