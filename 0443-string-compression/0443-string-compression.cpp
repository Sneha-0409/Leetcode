class Solution {
public:
    int compress(vector<char>& chars) {
        int res = 0;
        for(int i =0;i<chars.size();){
            const char letter = chars[i];
            int cnt = 0;

            while(i<chars.size() && chars[i] == letter){
                ++cnt;
                ++i;
            }
            chars[res++] = letter;
            if(cnt > 1){
                for(const char c : to_string(cnt)){
                    chars[res++] = c;
                }
            }
        }
        return res;
    }
};