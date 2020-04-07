class Solution {
public:
    int countElements(vector<int>& arr) {
        int n = arr.size();
        
        if(n == 1) return 0;
        int ans = 0;
        sort(arr.begin(), arr.end());
        int first = arr[0];
        int cnt=1;
        for(int i=1; i<n; i++){
            if(first == arr[i]){
                cnt++;
            }else{
                
                if(arr[i]- first == 1){
                    if(cnt == 1) ans++;
                    else{
                        ans += cnt;
                        
                    }
                }
                first = arr[i];
                cnt = 1;
            }
        }
        
        return ans;
    }
};
