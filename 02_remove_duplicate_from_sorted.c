int removeDuplicates(int* nums, int numsSize) {

    int ans = 1; 

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[ans++]=nums[i];  
        }
    }

    return ans;
}
