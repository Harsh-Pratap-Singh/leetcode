class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       int n = nums.size();
       vector<int>pos(n/2); 
       vector<int>neg(n/2); 
       int x = 0;
       int y = 0;
        for(auto i : nums){
            if(i > 0){
                pos[x] = i;
                x++;
            }
            else{
                neg[y] = i;
                y++;
            }
        }
        vector<int>ans(n,0);
        int j = 0;
        int k = 0;

        for(int i = 0;i < n;i++){
            if(i%2 == 0){
                ans[i] = pos[k];
                k++;
            }
            else{
                ans[i] = neg[j];
                j++;
            }
        }
        return ans;
    }
};