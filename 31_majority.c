int majorityElement(int* nums, int numsSize) {
    int candinate = nums[0];
    int votes = 0;
    for (int i = 0 ; i < numsSize; i++) {
        if(candinate == nums[i]) {
            votes = votes + 1;
        } else {
            votes = votes - 1;
        }
        if (votes == 0) {
            candinate = nums[i];
            votes = 1;
        }
    }
    return candinate;
}