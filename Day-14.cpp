class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int str_len = s.size();
        
        if(str_len == 1) return s;
        
        int rows = shift.size();
        int left_amt = 0, right_amt = 0;
        
        for(int i=0; i<rows; i++){
            if(shift[i][0]) right_amt += shift[i][1];
            else left_amt += shift[i][1];
        }
        int shift_amt = abs(left_amt - right_amt) % str_len;
        string ans="";
        if(left_amt > right_amt){      // shift left
            
            for(int i = shift_amt; i< str_len; i++){
                ans += s[i];
            }
            for(int i = 0; i <= shift_amt -1; i++){
                ans += s[i];
            }
        }else{                          // shift right
           
            for(int i = str_len- shift_amt; i< str_len; i++){
                ans += s[i];
            }
            for(int i = 0; i < str_len- shift_amt; i++){
                ans += s[i];
            }
        }
        
        return ans;
    }
};
