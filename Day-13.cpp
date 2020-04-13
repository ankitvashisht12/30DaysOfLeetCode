class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        
        map<int, int> m;
        
        int sum=0;
        
        m[0] = -1;
        int mx = 0;
        for(int i=0; i<n; i++){
            if(!nums[i]){
                sum += -1;
            }else{
                sum += 1;
            }
            
            if(m.find(sum) == m.end()){
                m[sum] = i;
            }else{
                mx  = max(i-m[sum], mx);
            }
        }
        
        return mx;
    }
};
