//
// Created by xiayula on 16/7/15.
//
class Solution{
public:
    vevtor<string> letterCombinations(string digits){
        string numbers[] = {
                "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        int len = digits.size();
        if(len == 0) return {};
        vector<string> res;
        dfs(res, numbers, digits, "");
        return res;
    }
    void dfs(vector<string>& res, string numbers[], string digits, string r){
        if(digits.empty()){
            res.push_back(r);
        }else{
            for(int i=0; i<numbers[digits[0]-'1'].size(); i++){
                dfs(res, numbers, digits.substr(1), r + numbers[digits[0]-'1'][i]);
            }
        }
    }
};
