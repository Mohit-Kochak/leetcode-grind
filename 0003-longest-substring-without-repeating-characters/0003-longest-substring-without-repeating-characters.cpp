class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i, j, temp, val, count, flag, maxy;
        vector<int> hash(128, 0);
        i = 0;
        j = 0;
        count = 0;
        maxy = 0;

        while (j < s.length()) {

            hash[s[j]]++;

            while (hash[s[j]] > 1 && i < s.length()) {
                maxy = max(maxy, count);
                hash[s[i]]--;
                count--;
                i++;
            }

            count++;
            j++;
        }
        maxy = max(maxy, count);
        return maxy;
    }
};