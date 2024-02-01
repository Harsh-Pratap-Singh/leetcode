bool xorGame(int* nums, int numsSize) {
    if(numsSize % 2 == 0){
        return true;
    }
    int ans = 0;
    for(int i = 0; i < numsSize;i++ ){
        ans ^= nums[i];
    }

    return ans == 0;
}