class Solution {
public:
    // helper function
    void swap_nums(vector<int>& nums, int i, int cnt){
        int temp = nums[i];
        nums[i] = nums[cnt];
        nums[cnt] = temp;
    }
    
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int cnt=0;
        
        
        for(int i =0; i<n; i++){
            if(nums[i] != 0){
                
                if (cnt != i) swap_nums(nums, i, cnt);
                cnt++;
            }
        }
    }
};
