/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int left = 0;
    int right = numsSize - 1;
    int* result = (int*)malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            result[left] = nums[i];
            left++;
        } else {
            result[right] = nums[i];
            right--;
        }
    }
    *returnSize = numsSize;
     return result;
}