class Solution {
public:
    bool checkValidString(string s) {
        
        int stars= 0 ;
        int left=0, right=0;
        for(char ch : s){
            if(ch=='(') left++;
            else if(ch=='*') stars++;
            else right++;
            
            if(right > left+stars) return false;
       }
        
         stars= 0 ;
         left=0;
        right=0;
        
        for(int i = s.size()-1; i >=0; i--)
        {    
            char ch= s[i];
            if(ch=='(') left++;
            else if(ch=='*') stars++;
            else right++;
            
            if(left > right+stars) return false;
       }
        
        return true;
    }
};
