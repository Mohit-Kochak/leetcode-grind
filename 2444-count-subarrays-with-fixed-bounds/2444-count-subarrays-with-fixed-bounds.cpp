class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int i, j, temp, flag, x, kmin, kmax, cp, smaller;
        long long int ans;
        ans = 0;
        kmin = kmax = -1;

        i = 0;
        cp = -1;
        while (i < nums.size()) {
            if (nums[i] < minK || nums[i] > maxK) {
                cp = i;
            }
            if (nums[i] == minK) {
                kmin = i;
            }
            if (nums[i] == maxK) {
                kmax = i;
            }

            smaller = min(kmin, kmax);
            temp = smaller - cp;
            if (temp >= 0) {
                ans = ans + temp;
            }
            i++;
        }
        return ans;
    }
};