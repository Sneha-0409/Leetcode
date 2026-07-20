class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int lvl = 0;
        for(char ch : s){
            if(ch == '('){
                if(lvl > 0) ans += ch;
                 lvl++;
            }
            else if(ch == ')'){
                lvl--;
                if(lvl>0) ans += ch;
            }
        }
        return ans;
    }
};