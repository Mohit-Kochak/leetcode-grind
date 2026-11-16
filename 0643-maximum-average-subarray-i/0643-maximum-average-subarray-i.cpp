class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i, j, count, val, flag;
        double answer, maxi, temp;
        i = 0;
        maxi = INT_MIN;

        for (j = 0; j < k; j++) {
            temp = temp + nums[j];
        }
        answer = temp / k;

        maxi = max(maxi, answer);

        while (j < nums.size()) {
            temp = temp - nums[i];
            temp = temp + nums[j];

            answer = temp / k;

            maxi = max(maxi, answer);
            i++;
            j++;
        }

        return maxi;
    }
};