class Solution {
public:
    int colz_con(int x){
        int a = 0;
        while(x != 1){
            if(x % 2 == 0){
                x /= 2;
            }
            else{
                x = 3*x + 1;
            }
            a++;
        }
        return a;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>colz;

        for(int i = lo; i <= hi;i++){
            colz.push_back({colz_con(i),i});
        }
        sort(colz.begin(),colz.end());

        return colz[k-1].second;
    }
};