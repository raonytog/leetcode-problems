/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int temp = 0, idx = 0;
    int *ans = malloc(numsSize * sizeof(int));
    for(int i=0;i<numsSize;i++) {
        for(int j = i + 1; j < numsSize; j++) {
            temp = nums[i];
            if (temp == nums[j]) {
                ans[idx] = temp;
                idx++;
            }
        }
    }

    ans = realloc(ans, idx*sizeof(int));
    *returnSize = idx;
    return ans;
}