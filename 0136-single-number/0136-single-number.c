int singleNumber(int* nums, int numsSize) {
    int number = 0;
    for(int i = 0; i < numsSize; i++){
        number ^= nums[i];
    }
    return number;
}