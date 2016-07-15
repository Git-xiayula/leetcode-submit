//
// Created by xiayula on 16/7/14.
//

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        if(len == 0) return "";
        if(len == 1) return strs[0];
        for(int i=0; i < strs[0].size(); i++){
            for(int j=1; j < strs.size(); j++){
                if(i >= strs[j].size() || strs[0][i] != strs[j][i]){
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};