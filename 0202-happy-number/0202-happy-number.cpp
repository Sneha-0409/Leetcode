class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        while(s.find(n) == s.end()){
            s.insert(n);
            n = nextNum(n);
            if(n == 1){
                return true;
            }
        }
        return false;

    }
    private:
    int nextNum(int n){
        int op = 0;
        while(n>0){
            int digit = n%10;
            op += digit*digit;
            n = n/10;
        }
        return op;
    }
};