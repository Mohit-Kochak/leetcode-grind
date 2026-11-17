/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    int i,j,*ip;
    i=0;
    ip = (int*)malloc(2*sizeof(int));
    *returnSize =2;
    while(i<numsSize-1){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                ip[0]=i;
                ip[1]=j;
            }

        }i++;
    }

    return ip;
}