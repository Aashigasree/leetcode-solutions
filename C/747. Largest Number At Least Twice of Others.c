int dominantIndex(int* nums, int numsSize) {
    int max = 0;
    int index;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > max) {
            max = nums[i];
            index = i;
        }
    }

    for (int i = 0; i < numsSize; i++) {
        if (i == index) {
            continue;
        }
        if (2 * nums[i] > max) {
            return -1;
        }
    }
    return index;
}