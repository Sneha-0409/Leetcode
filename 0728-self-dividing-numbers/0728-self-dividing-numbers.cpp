class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i =left; i<=right;i++){
            int num = i;
            bool condition = true;
            
            while(num!=0){
                int digit = num%10;
                num /=10;
                if(digit!=0){
                    if(i%digit != 0){
                        condition = false;
                    }
                }
                else{
                    condition = false;
                    break;
                }
            }
            if(condition){
                res.push_back(i);
            }
        }
            return res;
    }
};