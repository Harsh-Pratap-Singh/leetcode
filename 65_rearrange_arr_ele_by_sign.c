/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    int n = numsSize;
    int*ans =  (int*)malloc(n*sizeof(int));
    int k = 0 , j = 1;

    for(int i = 0;i < n;i++){
        if(nums[i] < 0){
            ans[j] = nums[i];
            j += 2;
        }
        else{
            ans[k] = nums[i];
            k += 2;
        }
    }
    *returnSize = n;
    return ans;
    
}