/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int left = 0;
    int right = numsSize - 1;
    int index = numsSize - 1;
    int square;
    int* ans = (int*)malloc(numsSize * sizeof(int));

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
    *returnSize = numsSize;
    return ans;
}