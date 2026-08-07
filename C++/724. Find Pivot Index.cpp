class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int total = 0;
        int right;

        for (int i = 0; i < nums.size(); i++) {
            total += nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            right = total - left - nums[i];
            if (right == left) {
                return i;
            } else {
                left += nums[i];
            }
        }
        return -1;
    }
};