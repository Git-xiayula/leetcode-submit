//
// Created by xiayula on 16/7/15.
//
class Solution {
public:
    bool isValid(string s) {
        stack<char> sk;
        int len = s.size();
        if(len == 0) return true;
        if(len & 0x1) return false;
        for(int i=0; i<len; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                sk.push(s[i]);
            }else if(s[i] == ')'){
                if(sk.empty())
                    return false;
                char top = sk.top();
                if(top != '(') return false;
                else sk.pop();
            }else if(s[i] == '}'){
                if(sk.empty())
                    return false;
                char top = sk.top();
                if(top != '{') return false;
                else sk.pop();
            }else if(s[i] == ']'){
                if(sk.empty())
                    return false;
                char top = sk.top();
                if(top != '[') return false;
                else sk.pop();
            }else{
                return false;
            }
        }
        return sk.empty();
    }
};
