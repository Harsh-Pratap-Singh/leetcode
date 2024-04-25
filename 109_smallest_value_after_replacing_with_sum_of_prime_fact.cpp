class Solution {
public:
    int smallestValue(int n) {
        while(true){
            int cur = n;
            int sum = 0;
            for(int i = 2;i*i  <= n;i ++){
                while(n % i == 0){
                    sum += i;
                    
                    n /= i; 
                }
            }
            if(n > 1){
                sum += n;
            }
            if(sum == cur){
                return sum;
            }
            n = sum;
            
        }
        return n;
    }
};