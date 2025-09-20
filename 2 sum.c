#include <stdio.h>

void twoSum(int nums[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Indices: %d and %d\n", i, j);
                return; // Found, exit function
            }
        }
    }
    printf("No two numbers add up to the target.\n");
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int n = sizeof(nums) / sizeof(nums[0]);

    twoSum(nums, n, target);
    return 0;
}
