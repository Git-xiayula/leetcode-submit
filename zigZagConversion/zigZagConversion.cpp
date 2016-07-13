//
// Created by xiayula on 16/7/13.
//
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1 || s.size() <= 1) return s;
        int circle = 2 * numRows - 2;
        string res = "";
        for(int i = 0; i < numRows; i++){
            for(int j = i; j < s.size(); j += circle){
                res += s[j];
                if(i > 0 && i < numRows-1){
                    int t = j + lag - 2*i;
                    if(t < s.size()){
                        res += s[t];
                    }
                }
            }
        }
        return res;
    }
};
