class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;
        int breadth,length,area;

        while (left < right) {
            breadth = right - left;
            length = min (height[left], height[right]);
            area = breadth * length;

            maxArea = max(maxArea,area);

            if (height[left]< height[right]) {
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
};