class Solution {
public:
    int minimumSum(int num) {
        int min1, min2, max2, max1, i, j, k, temp, count, val, flag;
        vector<int> v;

        temp = num;
        min1 = min2 = max1 = max2 = 0;
        while (temp != 0) {
            v.push_back(temp % 10);

            temp = temp / 10;
        }

        sort(v.begin(), v.end());
        if (v.size() == 4) {
            min1 = v[0] * 10;
            min2 = v[1] * 10;
            max1 = v[2];
            max2 = v[3];
            min1 = min1 + max2;
            min2 = min2 + max1;
        }

        return min1 + min2;
    }
};