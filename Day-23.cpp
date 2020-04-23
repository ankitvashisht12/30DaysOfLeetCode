class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int rangeBitwiseAnd(int m, int n) {
        

        if(m == 0) return 0;    
        long long size = abs(m-n);
        long long ans=m;
        for(long long i = (long long)m+1;  i<= (long long)n; i++){
            ans &= i;
            if(ans == 0) break;
        }
        return ans;
    }
};
