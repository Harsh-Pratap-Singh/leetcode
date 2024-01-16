int trap(int* height, int heightSize) {
    if (heightSize <= 1) {
        return 0;
    }

    int sum = 0;
    int lmax= 0, rmax = 0;
    int lhs = 0, rhs = heightSize - 1;

    while (lhs < rhs) {
        if (height[lhs] < height[rhs]) {
            if (height[lhs] >= lmax) {
                lmax= height[lhs];  
            } else {
                sum += lmax- height[lhs];
            }
            lhs++;
        } else {
            if (height[rhs] >= rmax) {
                rmax = height[rhs];  
            } else {
                sum += rmax - height[rhs];
            }
            rhs--;
        }
    }

    return sum;
}