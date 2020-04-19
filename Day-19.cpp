class Solution {
public:
    
    int searchMin(vector<int> arr, int l, int r){
        int mid = 0;
        while(l < r){
            mid= l + (r-l)/ 2;
            
            if(arr[mid] > arr[r]) l=mid+1;
            else r = mid;
        }
        
        return l;
    }
   
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        
        if(n==0) return -1;
       
  
        
   
        int l = 0;
        int r = n-1;
        
        // search minimum element in vector
        int _minIdx= searchMin(nums, l, r);
        
     
        if(_minIdx == 0){
            if(binary_search(begin(nums), end(nums), target)){
                return distance(begin(nums) , lower_bound(begin(nums) , end(nums), target));
            }else return -1;
        }
        
        
        if(target >= nums[0] && target <= nums[_minIdx-1]){
            
            if(binary_search(nums.begin(), nums.begin()+_minIdx, target)){
                return  lower_bound(nums.begin(), nums.begin()+_minIdx, target) - nums.begin();
            }else return -1;
    
        
        }else{
            
            if(binary_search(nums.begin()+_minIdx, nums.end(), target)){
                return lower_bound(nums.begin()+_minIdx, nums.end(), target) - nums.begin();
            }else return -1;
           
        }
    }
};
