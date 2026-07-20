class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        int add;
        vector<int> ans(2);

        while (left < right) {
            add = numbers[left] + numbers[right];
            if (add > target) {
                right--;
            } else if (add < target) {
                left++;
            } else {
                ans[0] = left + 1;
                ans[1] = right + 1;
                return ans;
            }
        }
        return {};
    }
};