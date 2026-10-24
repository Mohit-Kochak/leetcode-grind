class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int i, j, temp, count, val, flag, max, size;
        long long int subarr;

        max = nums[0];
        size = nums.size();
        for (i = 1; i < nums.size(); i++) {
            if (max < nums[i]) {
                max = nums[i];
            }
        }
        subarr = 0;
        i = 0;
        j = 0;
        count = 0;

        while (j < nums.size()) {
            if (nums[j] == max) {
                count++;
            }
            
            while (count >= k) {
                subarr = subarr + (size - j);
                if (nums[i] == max) {
                    count--;
                }
                i++;

                
            }

            j++;
        }
        return subarr;
    }
};