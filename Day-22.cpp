class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> v(n, 0);
        v[0] = nums[0];
        for(int i = 1; i<n ;i++){
            v[i] =nums[i] + v[i-1];
        }
        long long ans=0; 
        for(int i =0; i<n; i++){
            int j = i-1;
            if(v[i] == k) ans++;
            while(j >= 0){
               if((v[i] - v[j]) == k) ans++; 
               j--; 
            }
        }
        
        return ans;
        
    }
};
