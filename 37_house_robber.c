int rob(int* nums, int numsSize) {
   
   int first = 0;
   int sec = 0;
   for(int i =0 ;i<numsSize;i++){
       int new = fmax(nums[i]+first,sec);
       first = sec;
       sec = new;
   }
   return sec;
   
}