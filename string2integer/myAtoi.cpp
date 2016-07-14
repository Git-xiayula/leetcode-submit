//
// Created by xiayula on 16/7/14.
//
class Solution{
public:
    int myAtoi(string str){
        int sign = 1, len = str.size(), i = 0, res = 0;
        while(str[i] == ' ') i++;
        if(len == 0) return 0;
        if(str[i] == '-') {
            sign = -1;
            i++;
        }else if(str[i] == '+'){
            i++;
        }

        for( ; i < len; i++){
            if(str[i] >= '0' && str[i] <= '9'){
                if(sign == 1 && (res > INT_MAX / 10  || (res == INT_MAX / 10 && str[i] >= '7'))){
                    return INT_MAX;
                }
                if(sign == -1 && (-res < INT_MIN / 10) || (-res == INT_MIN / 10 && str[i] >= '8')){
                    return INT_MIN;
                }
                res = res * 10 + str[i] - '0';
            }else{
                break;
            }
        }
        return sign * res;
    }
};
