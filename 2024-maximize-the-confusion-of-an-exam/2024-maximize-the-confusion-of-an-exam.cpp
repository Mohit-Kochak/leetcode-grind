class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int i, j, temp, count, val, flag, true_count, false_count, tval, fval,
            maxt, maxf;

        i = 0;
        j = 0;
        tval = fval = k;
        true_count = 0;
        maxt = maxf = 0;

        while (j < answerKey.size()) {
            if (answerKey[j] == 'F') {
                tval--;
            }

            if (tval < 0) {
                if (maxt < true_count) {
                    maxt = true_count;
                    cout << maxt << endl;
                }
                while (tval < 0 && i < answerKey.size()) {
                    if (answerKey[i] == 'F') {
                        tval++;
                    }
                    true_count--;
                    i++;
                }
            }
            true_count++;
            j++;
        }
        if (maxt < true_count) {
            maxt = true_count;
            cout << maxt << endl;
        }

        i = 0;
        j = 0;
        fval = k;
        false_count = 0;
        while (j < answerKey.size()) {
            if (answerKey[j] == 'T') {
                fval--;
            }

            if (fval < 0) {
                if (maxf < false_count) {
                    maxf = false_count;
                    cout << "fcount" << maxf << endl;
                }
                while (fval < 0 && i < answerKey.size()) {
                    if (answerKey[i] == 'T') {
                        fval++;
                    }
                    false_count--;
                    i++;
                }
            }
            false_count++;
            j++;
        }
        if (maxf < false_count) {
            
            maxf = false_count;
            cout << "fcount" << maxf << endl;
        }

        if (maxt > maxf) {
            return maxt;
        }
        return maxf;
    }
};