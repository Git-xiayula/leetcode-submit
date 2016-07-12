//
// Created by xiayula on 16/7/12.
//
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.size(), begin = 0, end = 0, maxLen = INT_MIN;
        if(len == 0) return 0;
        unordered_map<char, bool> currentChar;
        while (end < len){
            if(currentChar.find(s[end]) == currentChar.end() || currentChar[s[end]] == false){
                //not found
                maxLen = max(end-begin+1, maxLen);
                currentChar[s[end]] = true;
                end++;
            }else{
                currentChar[s[begin]] = false;
                begin++;
            }
        }
        return maxLen;
    }
};
