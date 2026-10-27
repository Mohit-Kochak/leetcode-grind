class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int i, j, l, p1, p2, temp, count, val, flag, x, size, length, avg;

        long long int sum;

        size = nums.size();
        vector<int> ans(size, -1);

        if (k > size) {
            return ans;
        }

        i = k;
        temp = k;
        sum = nums[i];
        p1 = i;
        p2 = i;
        while (temp != 0) {
            p1--;
            p2++;
            if (p1 >= 0 && p2 < nums.size()) {
                sum = sum + nums[p1] + nums[p2];
            } else {
                return ans;
            }
            temp--;
        }
        cout << sum << endl;
        x = (2 * k) + 1;
        ans[i] = sum / x;
        i++;
 x = (2 * k) + 1;
        while (i < size - k) {

            sum = sum - nums[p1];
            p1++;
            p2++;
            sum = sum + nums[p2];
            cout << sum << endl;
           
            ans[i] = sum / x;

            i++;
        }
        return ans;
    }
};