class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int i, j, k, temp, count, val, x, min, max, mid, leftm, rightm;
        vector<int> v(2, -1);
        min = 0;
        max = nums.size()-1;
        if(max<0){
            return v;
        }
        leftm = INT_MIN;
        // rightm = INT_MIN;
        while (min <= max) {
            mid = min + (max - min) / 2;

            if (nums[mid] == target) {
                leftm = mid;
                max = mid - 1;
            } else if (nums[mid]<target){
                min = mid + 1;
            }
            else
            {
                max=mid-1; 
            }
        }

        min = 0;
        max = nums.size()-1;
        // leftm=INT_MIN;
        rightm = INT_MIN;
        while (min <= max) {
            mid = min + (max - min) / 2;

            if (nums[mid] == target) {
                rightm = mid;
                min = mid + 1;
            } else if (nums[mid]<target){
                min = mid + 1;
            }
            else
            {
                max=mid-1; 
            }
        }

        if (leftm == INT_MIN && rightm == INT_MIN) {
            return v;

        } else {
            v[0] = leftm;
            v[1] = rightm;
            return v;
        }
    }
};