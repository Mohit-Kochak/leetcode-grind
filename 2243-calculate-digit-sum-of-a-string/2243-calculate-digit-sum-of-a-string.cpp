class Solution {
public:
    string digitSum(string s, int k) {
        int i, j, val, count, number;
        string temp, ch;

        i = 0;
        temp = "";
        val = 0;
        while (s.length() > k) {
            val = 0;
            for (j = i; (j < i + k && j < s.length()); j++) {
                number = s[j] - '0';
                val = val + number;
            }
            temp = temp + to_string(val);
            i = i + k;
            if (i >= s.length()) {
                i = 0;
                s = temp;
                temp = "";
            }
        }
        return s;
    }
};