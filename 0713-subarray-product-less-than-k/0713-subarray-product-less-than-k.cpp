class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i, j, temp, count, val, subarr, prod, flag;
        if(k<=1){
            return 0;
        }

        i = 0;
        j = 0;
        prod = 1;
        subarr = 0;
        while (j < nums.size()) {
            prod = prod * nums[j];
            while (prod >= k) {
                if (i < nums.size()) {
                    prod = prod / nums[i];
                    i++;
                }else{
                    break;
                }
            }
            
            subarr = subarr + (j - i) + 1;
            j++;
        }
        return subarr;
    }
};