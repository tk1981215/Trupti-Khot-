#include <stdio.h>
#include <stdlib.h>

// Comparator function for qsort
int cmp(const void *a, const void *b) {
    return (*(int *)a) - (*(int *)b);
}

// Function to print all unique triplets
void threeSum(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);

    for(int i = 0; i < numsSize - 2; i++) {
        if(i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates

        int left = i + 1;
        int right = numsSize - 1;

        while(left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if(sum == 0) {
                printf("[%d, %d, %d]
", nums[i], nums[left], nums[right]);

                // Skip duplicates for left
                while(left < right && nums[left] == nums[left + 1]) left++;
                // Skip duplicates for right
                while(left < right && nums[right] == nums[right - 1]) right--;

                left++;
                right--;
            } else if(sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }
}

int main() {
    int nums[] = {-1, 0, 1, 2, -1, -4};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    threeSum(nums, numsSize);
    return 0;
}
