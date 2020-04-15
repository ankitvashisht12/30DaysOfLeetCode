class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size, 1);
        
        
//  ======  O(n) time and O(n) Space solution  ======================= // 
        
//         vector<int> left(size, 1);
//         vector<int> right(size, 1);
//         for(int i = 1; i<size; i++){
//              left[i]= left[i-1]*nums[i-1];
//         }
        
//         for(int i=size-2; i>=0; i--){
//             right[i] = right[i+1]*nums[i+1];
//         }
        
//         for(int i=0; i<size; i++){
//             ans.push_back(left[i]*right[i]);
//         }
        
        
// ++++++++ O(n) time and O(1) Space solution ++++++++++++++++++++++ //
        
        int left = 1;
        
        for(int i=size-2; i>=0; i--) ans[i] = ans[i+1]*nums[i+1];
        
        for(int i = 0 ; i< size; i++){
            ans[i] *= left;
            left*= nums[i];
        }
        
        return ans;
    }
};
