int maxProduct(int* nums, int numsSize) {
    int currentMax = nums[0];
    int currentMin = nums[0];
    int answer = nums[0];

    for (int i = 1; i < numsSize; i++) {
        int oldMax = currentMax;
        int oldMin = currentMin;
        int num = nums[i];
        int candidate1 = num;
        int candidate2 = oldMax * num;
        int candidate3 = oldMin * num;

        if (candidate1 >= candidate2 && candidate1 >= candidate3) {
            currentMax = candidate1;
        } else if (candidate2 >= candidate1 && candidate2 >= candidate3) {
            currentMax = candidate2;
        } else if (candidate3 >= candidate1 && candidate3 >= candidate2) {
            currentMax = candidate3;
        }

        if(currentMax > answer) {
            answer = currentMax;
        }         

        if (candidate1 <= candidate2 && candidate1 <= candidate3) {
            currentMin = candidate1;
        } else if (candidate2 <= candidate1 && candidate2 <= candidate3) {
            currentMin = candidate2;
        } else if (candidate3 <= candidate1 && candidate3 <= candidate2) {
            currentMin = candidate3;
        }
    }
    return answer;
}