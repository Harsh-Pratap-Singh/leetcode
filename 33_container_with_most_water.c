int maxArea(int* height, int heightSize) {
    if (heightSize <= 1) {
        return 0;
    }
    
    int area = 0;
    int i = 0, j = heightSize - 1;

    while (i < j) {
        int length = fmin(height[i], height[j]);
        area = fmax(area, length * (j - i));

        // Move the pointers
        if (height[j] < height[i]) {
            j--;
        } else {
            i++;
        }
    }

    return area;
}
