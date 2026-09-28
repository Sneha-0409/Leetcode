class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int end = 0;
        for(char a : s){
          if(a == ')'){
            depth--;
            continue;
        }
        if(a != '(') continue;
        depth++;
        if(depth > end) end = depth;
        }
        return end;
    }
};