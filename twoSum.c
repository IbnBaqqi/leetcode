#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i = 0;
    while (i < numsSize)
    {
        int j = i + 1;
        while (j < numsSize)
        {
            if (nums[i] + nums[j] == target)
            {
				*returnSize = 2;
                int *result = malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                return result;
            }
            j++;
        }
        i++;
    }
	return (0);
}

int main(void)
{
	int nums[4] = {2, 7, 11, 15};
	int target = 9;
	int returnSize;
	int *result = twoSum(nums, 4, 9, &returnSize);
	for (int i = 0; i < returnSize; i++){
		printf("%d ", result[i]);
	}
	printf("\n");
}