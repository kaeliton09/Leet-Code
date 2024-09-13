int singleNumber(int* nums, int numsSize) {
    int number = 0;
    int vezes = 0;
    for(int i = 0; i < numsSize; i++){
        vezes = 0;
        for(int j = 0; j < numsSize; j++){
            if(nums[i] == nums[j]) number = nums[i], vezes++;
        }
        if(vezes == 1) return number;
    }
    return number;
}