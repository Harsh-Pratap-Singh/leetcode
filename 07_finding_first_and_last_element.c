
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int first = 0;
    int last = numsSize - 1;
    int j = 0;

    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 0;

    while (first <= last) {
        int mid = first + (last - first) / 2;

        if (target< nums[mid]) {
            last = mid - 1;
        } else if (target > nums[mid]) {
            first = mid + 1;
        } else {
            int start = mid;
            int end = mid;

            while (start > 0 && nums[start - 1] == target) {
                start--;
            }


            while (end < numsSize - 1 && nums[end + 1] == target) {
                end++;
            }

            result[0] = start;
            result[1] = end;
            *returnSize = 2;
            return result;
        }
    }

    result[0] = -1;
    result[1] = -1;
    *returnSize = 2;
    return result;
}
z