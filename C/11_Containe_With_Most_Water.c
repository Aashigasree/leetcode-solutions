int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int maxArea = -1;
    int area, breadth, length;

    while (left < right) {
        breadth = right - left;

        if (height[left] < height[right]) {
            length = height[left];
        } else {
            length = height[right];
        }

        area = breadth * length;

        if (area > maxArea) {
            maxArea = area;
        }

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    
    return maxArea;
}