class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> ch;
        for(char c : s){
            ch[c]++;
        }
        for(int i=0;i<s.size();i++){
            if(ch[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};