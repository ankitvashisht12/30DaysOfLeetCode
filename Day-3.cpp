class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    
 
    if(nums.end()-nums.begin() <= 0) return INT_MIN;
        
    int cur_max = nums[0];
    int over_max= nums[0];
    for(auto i = nums.begin()+1; i != nums.end(); i++){
        cur_max = max((*i), cur_max+(*i));
        over_max = max(over_max, cur_max);
    }

    return over_max;
        
    }
};
