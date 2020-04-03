class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans= 0;
        bool flag = true;
        int n = nums.size();
        
      
        for(int i =0 ; i<n-1; i+=2){
            if(nums[i] != nums[i+1]){ 
                
                ans = nums[i];
                flag = false;
                break;
            }
        }
        
        if(n&1 && flag){
            //cout<<"tis is r"<<endl;
            ans = nums[n-1];
        }
     
        return ans;
    }
};
