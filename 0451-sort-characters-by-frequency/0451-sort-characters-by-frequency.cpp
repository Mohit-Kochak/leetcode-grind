class Solution {
public:
    string frequencySort(string s) {
        int i, j, k, temp, count, val, flag, x;
        vector<int> shash(27, 0);
        vector<int> chash(27, 0);
        vector<int> hash(10, 0);

        i = 0;
        while (i < s.length()) {
            if (s[i] > 90) {
                shash[s[i] - 97]++;
            } else if (s[i] < 91 && s[i] > 64) {
                chash[s[i] - 65]++;
            } else {
                hash[s[i] - 48]++;
            }
            i++;
        }

        vector<pair<char, int>> v;
        i = 0;
        while (i < shash.size()) {
            if (shash[i] > 0) {
                v.push_back({i + 97, shash[i]});
            }
            i++;
        }

        i = 0;
        while (i < chash.size()) {
            if (chash[i] > 0) {
                v.push_back({i + 65, chash[i]});
            }
            i++;
        }
        i = 0;
        while (i < hash.size()) {
            if (hash[i] > 0) {
                v.push_back({i + 48, hash[i]});
            }
            i++;
        }
        sort(v.begin(), v.end(),
             [](auto& a, auto& b) { return a.second > b.second; });

        vector<char> ans;
        flag = 0;
        i = 0;
        while (i < v.size()) {
            while (v[i].second != 0) {
                ans.push_back(v[i].first);
                v[i].second--;
            }
            i++;
        }
        string answer(ans.begin(), ans.end());

        return answer;
    }
};