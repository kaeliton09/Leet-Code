/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int * ind = (int *) malloc(2 * sizeof(int));
    *returnSize = 2;
    
    for(int i = 0; i < numsSize-1; i++){
        for(int j = i+1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                ind[0] = i;
                ind[1] = j;
                return ind;
            }
        }
    }
    ind[0] = 0;
    ind[1] = 1;
    return ind;
    
}