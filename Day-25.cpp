class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int cnt;
        
        if(n == 1) return true;
        
        if(nums[0] == 0) return false;
        
        int _max = nums[0];
        
        for(int i = 1; i<n-1; i++){
            if(nums[i] == 0){
               
                if(_max <= 1) return false;
                else _max--;
            }
            
            else {
                if(nums[i] == _max) continue;

                else{
                    if(_max < nums[i]) _max = nums[i];
                    else _max--;
                }
            }
        }
        
        
        return true;
    }
};
