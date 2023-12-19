int searchInsert(int* nums, int numsSize, int target) {
    int f = 0;
    int l = numsSize;

    if(target>nums[l-1]){
        return l;
    }

    while(f<l){
        int mid= (f+l)/2;
        
        if(target<nums[mid]){
            l = mid ;
        }
        else if(target>nums[mid]){
            f=mid +1;
        }
        else{
            return mid;
        }
    }
    return l;
}