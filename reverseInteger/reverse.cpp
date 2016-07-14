//
// Created by xiayula on 16/7/14.
//
class Solution{
public:
    int reverse(int x){
        int sign = 1;
        if(!x) return 0;
        if(x < 0) {
            sign = -1;
            x = -x;
        }
        long long res = 0;
        while(x){
            res = res*10 + x%10;
            if(res > INT_MAX || res < INT_MIN) return 0;
            x = x/10;
        }
        return sign * res;
    }
};
