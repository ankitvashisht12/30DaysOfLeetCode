class Solution {
public:
    bool backspaceCompare(string S, string T) {
        
        stack<char> s1, s2;
        for(auto ch: S){
            if(ch != '#'){
                s1.push(ch);
            }else if(ch == '#' && !s1.empty()){
                s1.pop();
            }
        }
        
        for(auto ch: T){
            if(ch != '#'){
                s2.push(ch);
            }else if(ch == '#' && !s2.empty()){
                s2.pop();
            }
        }
        
        bool flag = true;
        
        if(s1.size() == s2.size()){
            while(!s1.empty()){
                if(s1.top() != s2.top()){
                    flag = false;
                    break;
                }else {
                    s1.pop();
                    s2.pop();
                }
            }
        }else flag = false;
        
        return flag;
        
    }
};
