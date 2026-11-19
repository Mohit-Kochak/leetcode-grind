class Solution {
public:
    int countGoodSubstrings(string s) {
        int i, j, temp, count;

        i = 0;
        temp = 1;
        j = 2;
        count = 0;
        while (j < s.length()) {
            if ((s[i] != s[temp]) && (s[temp] != s[j]) && (s[i] != s[j])) {
                count++;
            }
            i++;
            temp++;
            j++;
        }
        return count;
    }
};