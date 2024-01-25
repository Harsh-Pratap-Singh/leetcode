int minimumSum(int n, int k){
    int sum = 0, x = 1;
    for(int i = 0;i < n;i++){
        if(x >= k){
            sum += x++;
        }
        else if(k - x < x){
            x++;
            i--;
        }
        else{
            sum += x++;
        }
    }return sum;
}