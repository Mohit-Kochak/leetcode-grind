class Solution {
public:
    vector<int> minOperations(string boxes) {
        int i, j, k, temp, size, val, flag, *ip;

        size = boxes.length();
        vector<int> ans(size, 0);

        temp = 0;
        i = 0;
        while (i < boxes.length()) {
            temp = 0;
            for (j = 0; j < boxes.length(); j++) {

                if (j != i) {
                    if (boxes[j] == '1') {
                        temp = temp + abs(j - i);
                    }
                }
            }

            ans[i] = temp;

            i++;
        }

        return ans;
    }
};