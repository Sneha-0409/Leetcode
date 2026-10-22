
class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> req(26, 0);
        for (char c : licensePlate) {
            if (isalpha(c)) {
                req[tolower(c) - 'a']++;
            }
        }
        string ans = "";
        for (string word : words) {
            vector<int> freq(26, 0);
            for (char c : word) {
                freq[c - 'a']++;
            }
            bool valid = true;
            for (int i = 0; i < 26; i++) {
                if (freq[i] < req[i]) {
                    valid = false;
                    break;
                }
            }
            if (valid && (ans == "" || word.size() < ans.size())) {
                ans = word;
            }
        }
        return ans;
    }
};
