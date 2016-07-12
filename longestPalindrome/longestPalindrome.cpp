//
// Created by xiayula on 16/7/12.
//
class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.size(), maxLen = 0, start = 0;
        bool length[1000][1000] = {false};
        //base case1: handle len = 1;
        for(int i=0; i<len; i++){
            length[i][i] = true;
            start = i;
            maxLen = 1;
        }
        //base case2: handle len = 2;
        for(int i=0; i<len-1; i++){
            if(s[i] == s[i+1]){
                start = i;
                maxLen = 2;
                length[i][i+1] = true;
            }
        }
        //DP handle len >= 3
        for(int l=3; l <= len; l++){
            for(int i=0; i < len-l+1; i++){
                int j = i + l - 1;
                if(s[i] == s[j] && length[i+1][j-1]){
                    length[i][j] = true;
                    if(l > maxLen){
                        start = i;
                        maxLen = l;
                    }
                }
            }
        }

        return s.substr(start, maxLen);
    }
};
