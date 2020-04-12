class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        make_heap(begin(stones), end(stones));
        
        
        while(stones.size() > 1){
            pop_heap(begin(stones), end(stones));
            int first_max = stones.back();
            stones.pop_back();
            
            pop_heap(begin(stones), end(stones));
            int second_max = stones.back();
            stones.pop_back();
            
            int diff = abs(first_max - second_max);
            stones.push_back(diff);
            push_heap(begin(stones), end(stones));
        }
        
        if(stones.size() == 1) return stones[0];
        else return 0;
    }
};
