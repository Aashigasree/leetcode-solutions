class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        vector<int> result(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                result[left] = nums[i];
                left++;
            } else {
                result[right] = nums[i];
                right--;
            }
        }
        return result;
    }
};