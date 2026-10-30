class Solution {
public:
    string sortVowels(string s) {
        int i, j, k, temp, count, val, flag;
        vector<char> answer;
        string ans;
        vector<pair<char, int>> hash={
            {'A', 0}, {'E', 0}, {'I', 0}, {'O', 0}, {'U', 0},
            {'a', 0}, {'e', 0}, {'i', 0}, {'o', 0}, {'u', 0},
        };

        i = 0;
        while (i < s.length()) {
            if (s[i] == 'A') {
                hash[0].second++;
            } else if (s[i] == 'E') {
                hash[1].second++;
            } else if (s[i] == 'I') {
                hash[2].second++;
            } else if (s[i] == 'O') {
                hash[3].second++;
            } else if (s[i] == 'U') {
                hash[4].second++;
            } else if (s[i] == 'a') {
                hash[5].second++;
            } else if (s[i] == 'e') {
                hash[6].second++;
            } else if (s[i] == 'i') {
                hash[7].second++;
            } else if (s[i] == 'o') {
                hash[8].second++;
            } else if (s[i] == 'u') {
                hash[9].second++;
            }
            i++;
        }

       
        i = 0;
        count = 0;
        while (i < s.length()) {
            while (count <hash.size() && hash[count].second == 0) {
                count++;
            }

            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {
                answer.push_back(hash[count].first);
                hash[count].second--;
            } else {
                answer.push_back(s[i]);
            }
            i++;
        }
        ans=string(answer.begin(), answer.end());
        return ans;
    }
};