int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int *newArray = malloc(numsSize * 2 * sizeof(int)), j = 0;
    for (int i = 0; i < numsSize * 2; i++) {
        if (j == numsSize) j = 0;
        newArray[i] = nums[j];
        j++;

    }

    *returnSize = numsSize * 2;
    return newArray;
}