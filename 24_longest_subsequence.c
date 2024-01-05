int lengthOfLIS(int* nums, int numsSize) {
    int* res = (int*)malloc(numsSize*sizeof(int));

    for(int i = 0 ;i<numsSize ;i++){
        res[i]=1;
    }

    for(int i = numsSize -1; i >= 0 ;i--){
        for(int j = i+1; j<numsSize ;j++){

            if(nums[i]<nums[j]){
                res[i] = fmax(res[i] , res[j]+1);
            }
        }
    }
    int max = res[0];
    for(int i = 0 ;i<numsSize ; i++){
        max = fmax( max,res[i]);

    }
    return max;
    
}