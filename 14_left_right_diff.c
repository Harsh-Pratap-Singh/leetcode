#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int* res = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        int lhs = 0;
        int rhs = 0;

        for (int j = 0; j < i; j++) {
            lhs += nums[j];
        }

        for (int j = numsSize - 1; j > i; j--) {
            rhs += nums[j];
        }

        int a = lhs - rhs;
        if (a < 0) {
            a = -a;
        }

        res[i] = a;
    }

    return res;
}




/**
 * * i like this one best , this is a top performer code , he sacrifice memory complexity for space complexity 
 */
// int* leftRightDifference(int* nums, int numsSize, int* returnSize){
//     int * left=(int*)malloc((numsSize+1)*sizeof(int));
//     int * right=(int*)malloc((numsSize+1)*sizeof(int));
//     int * arr=(int*)malloc(numsSize*sizeof(int));
//     int leftsum=0;
//     int rightsum=0;
//     left[0]=0;
//     right[numsSize]=0;
//     for(int i=0;i<numsSize;i++){
        
//         leftsum+=nums[i];
//         left[i+1]=leftsum;
//     }
    
//     for (int i = numsSize - 1; i >= 0; i--) {
//         rightsum += nums[i];
//         right[i] = rightsum;
//     }

//     for(int i=0;i<numsSize;i++){
//         arr[i]=abs(right[i]-left[i+1]);
//     }
//     *returnSize=numsSize;
//     return arr;
// }