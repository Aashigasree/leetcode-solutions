class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int left = 0;
        int right = nums.size() - 1;
        int index = nums.size() - 1;
        int square;
        vector<int> ans(nums.size());

        while (left <= right) {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if (rightSquare > leftSquare) {
                square = rightSquare;
                right--;
            } else {
                square = leftSquare;
                left++;
            }
            ans[index] = square;
            index--;
        }
        return ans;
    }
};