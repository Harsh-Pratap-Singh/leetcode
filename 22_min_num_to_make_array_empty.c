int minOperations(int* nums, int numsSize){
    int max = 0;
    int res = 0;

    for(int i = 0 ;i<numsSize; i++){
        max = fmax(max,nums[i]);
    }

    int * count=(int*)malloc((max+1)*sizeof(int));

    for(int i = 0 ;i<max +1 ;i++){
        count[i]=0;
    }
    

    for(int i = 0; i<numsSize; i ++){
        int num = nums[i];
        count[num]++;
    }


    for(int i = 0; i <= max; i ++){
        if(count[i] >0 ){
            if(count[i]==1){
                return -1;
            }
            res += (count[i]+2)/3;
        }    

    }
    free(count);
    return res;
}