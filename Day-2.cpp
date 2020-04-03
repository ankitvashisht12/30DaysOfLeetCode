int arr[10];
class Solution {
public:
    
    inline int calcSquare(int a){
        if(arr[a] != 0) return arr[a];
        
        arr[a] = a*a;
        return arr[a];
    }
    
    bool isHappy(int n){
        int num = n ;
        vector<long long> numbers;
        bool flag = true;
        numbers.push_back(n);
        
        if(n==1) return flag;
        
        
        long long ans = 0; 
        while(true){
           
                   
                if(num > 0){
                    ans += (long long)calcSquare(num%10);
                    num /= 10;
                }
                else{ 
                  
                    num = ans;
                    ans = 0;
                    if(num == 1){
                    
                        flag = true;
                        break;
                    }
                    
                    if(find(numbers.begin(), numbers.end(), num) == numbers.end()){
                        numbers.push_back(num);
                           
                    }else{
                        flag = false;
                        break; 
                    }
                    
                }
                
        }
            
                
        return flag;
        
    }
};
