int bit(int x){
    int a = 0;
    while(x>0){
        if(x%2 == 1){
            a++;
            x/=2;
        }
        else{
            x/=2;
        }
    }
    return a;
}
int sumIndicesWithKSetBits(int* nums, int numsSize, int k){
    int result=0;

    for(int i=0;i<numsSize ; i ++ ){
        if(bit(i) == k){
            result+=nums[i];
        }
       

    }
    return result;
}