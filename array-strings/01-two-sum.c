#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    free(result);
    return NULL;
}

int main() {
    int returnSize;

    int nums1[] = {2, 7, 11, 15};
    int* ans1 = twoSum(nums1, 4, 9, &returnSize);
    printf("Test 1: [%d, %d]\n", ans1[0], ans1[1]);
    free(ans1);

    int nums2[] = {3, 3};
    int* ans2 = twoSum(nums2, 2, 6, &returnSize);
    printf("Test 2: [%d, %d]\n", ans2[0], ans2[1]);
    free(ans2);

    return 0;
}
