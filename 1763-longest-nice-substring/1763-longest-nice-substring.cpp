class Solution {
public:
    string longestNiceSubstring(string s) {
        string ans = "";
        for(int i=0;i<s.size();i++){
            unordered_set<char> st;
            for(int j=i;j<s.size();j++){
                st.insert(s[j]);
                bool nice = true;

                for(char c : st){
                    if(!st.count(tolower(c)) || !st.count(toupper(c))){
                        nice = false;
                        break;
                    }
                }
                if( nice && j-i+1 > ans.size()){
                    ans = s.substr(i, j-i+1);
                }
            }
        }
        return ans;
    }
};
