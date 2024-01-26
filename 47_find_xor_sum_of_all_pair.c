int getXORSum(int* arr1, int arr1Size, int* arr2, int arr2Size) {
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0;i < arr1Size;i++){
        sum1 ^= arr1[i];
    }
    for(int i = 0;i < arr2Size;i++){
        sum2 ^= arr2[i];
    }
    return sum1 & sum2;
    
}