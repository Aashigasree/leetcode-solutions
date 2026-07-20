/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left = 0;
    int right = numbersSize - 1;
    int add;
    int* ans = (int*)malloc(2 * sizeof(int));

    while (left < right) {
        add = numbers[left] + numbers[right];
        if (add > target) {
            right--;
        } else if (add < target) {
            left++;
        } else {
            ans[0] = left + 1;
            ans[1] = right + 1;
            *returnSize = 2;
            return ans;
        }
    }
    return NULL;
}