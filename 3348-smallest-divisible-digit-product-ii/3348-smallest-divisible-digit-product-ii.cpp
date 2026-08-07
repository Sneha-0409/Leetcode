class Solution {
public:
    string smallestNumber(string num, long long t) {
        long long x = t;
        for (int d = 2; d <= 9; d++) {
            while (x % d == 0)
                x /= d;
        }
        if (x != 1)
            return "-1";
        int len = num.size();
        vector<char> arr(num.begin(), num.end());
        vector<long long> req(len + 1, 0);
        req[0] = t;
        int stop = len - 1;
        for (int i = 0; i < len; i++) {
            int val = arr[i] - '0';
            if (val == 0) {
                stop = i;
                break;
            }
            long long g = gcd(req[i], (long long)val);
            req[i + 1] = req[i] / g;
        }

        if (req[len] == 1)
            return num;

        for (int i = stop; i >= 0; i--) {
            int cur = arr[i] - '0';
            for (int nxt = cur + 1; nxt <= 9; nxt++) {
                arr[i] = char('0' + nxt);
                long long need = req[i];
                need /= gcd(need, (long long)nxt);
                vector<char> suf;
                for (int j = i + 1; j < len; j++) {
                    int best = 9;
                    while (best > 1 && need % best != 0)
                        best--;
                    if (need % best == 0)
                        need /= best;

                    suf.push_back(char('0' + best));
                }
                if (need == 1) {
                    reverse(suf.begin(), suf.end());

                    for (int j = i + 1; j < len; j++)
                        arr[j] = suf[j - i - 1];
                    return string(arr.begin(), arr.end());
                }
            }
            arr[i] = num[i];
        }
        vector<char> ans;
        long long left = t;
        for (int d = 9; d >= 2; d--) {
            while (left % d == 0) {
                ans.push_back(char('0' + d));
                left /= d;
            }
        }
        int sz = max(len + 1, (int)ans.size());
        while ((int)ans.size() < sz)
            ans.push_back('1');
        reverse(ans.begin(), ans.end());
        return string(ans.begin(), ans.end());
    }
};