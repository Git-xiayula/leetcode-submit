//
// Created by xiayula on 16/7/14.
//
class Solution{
public:
    bool isPalindrome(int x){
        if(x < 0) return false;
        if(!x) return true;
        int temp = 0, org = x;
        while (x){
            temp = temp * 10 + x%10;
            x = x/10;
        }
        return temp == org;
    }
};
