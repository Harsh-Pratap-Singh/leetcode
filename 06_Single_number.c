// ``` my first thinking ```
// int singleNumber(int* nums, int numsSize) {
//     int x = nums[0];
//     int sum = 0;

//     if (numsSize <= 1) {
//         return x;
//     }

//     for (int i = 0; i < numsSize; i++) {
//         if (nums[i] % 2 != 0) {
//             sum += nums[i];
//             if (i == numsSize - 1) {
//                 return sum % 2;
//             }
//         } else {
//             int j = i + 1;
//             while (j < numsSize && nums[i] != nums[j]) {
//                 if (j == numsSize - 1) {
//                     return nums[i];
//                 }
//                 j++;
//             }
//             i = j; 
//         }
//     }

//     return 0; 
// }
int singleNumber(int* nums, int numsSize) {
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];
    }

    return result;
}