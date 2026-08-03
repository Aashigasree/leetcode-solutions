int pivotIndex(int* nums, int numsSize) {
    int totalSum = 0;
    int leftSum = 0;

    // Calculate total sum
    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }

    // Find pivot index
    for (int i = 0; i < numsSize; i++) {
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i;
        }
        leftSum += nums[i];
    }

    return -1;
}