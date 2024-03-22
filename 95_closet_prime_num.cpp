class Solution {
public:

    vector<int> closestPrimes(int left, int right) {
        
        vector<bool>sv(right + 1,true);
        sv[0] = false;
        sv[1] = false;

        for(long i = 2;i <= right;i ++){
            if(sv[i]){
                for(long long j = i*i;j <= right ;j += i){
                    sv[j] = false;
                    
                }
            }
        }

        int a = -1;
        int b = -1;

        vector<int>x;

        for(auto i = left;i <= right;i ++){
            if(sv[i]){
                x.emplace_back(i);
            }
        }
        int dif = INT_MAX;
        
        for(int i = 1;i < x.size();i++){
            int cur = x[i] - x[i -1 ];
            if(cur < dif){
                dif = cur;
                a = x[i -1];
                b = x[i];
            }
        }
        return {a,b};

    }
};