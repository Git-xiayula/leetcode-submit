//
// Created by xiayula on 16/7/15.
//
class Solution{
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        if(!n) return res;
        dfs(res, "", n, n);
        return res;
    }

    void dfs(vector<string>& res, string str,  int left, int right){
        if(left == right && left== 0){
            res.push_back(str);
        }else{
            if(left > 0){
                dfs(res, str + '(', left-1, right);
            }
            if(left < right){
                dfs(res, str + ')', left, right-1);
            }
        }
    }
};
