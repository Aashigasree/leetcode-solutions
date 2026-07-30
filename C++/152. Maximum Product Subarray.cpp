class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currentMax = nums[0];
        int currentMin = nums[0];
        int answer = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int oldMax = currentMax;
            int oldMin = currentMin;
            int num = nums[i];
            int candidate1 = num;
            int candidate2 = oldMax * num;
            int candidate3 = oldMin * num;

            currentMax = max({candidate1, candidate2, candidate3});

            answer = max(answer, currentMax);

            currentMin = min({candidate1, candidate2, candidate3});
        }
        return answer;
    }
};