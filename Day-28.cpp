class FirstUnique {
    unordered_map<int, list<int>::iterator> m;
    list<int> l;
public:
    FirstUnique(vector<int>& nums) {
        for(auto val : nums){
            if(m.find(val) != m.end()){
                auto iter = m[val];
                if(iter != l.end()){
                    l.erase(iter);
                    m[val]= l.end();
                }
            }else{
                l.push_back(val);
                auto iter = l.end();
                iter--;
                m[val] = iter;
            }
        }
        
    }
    
    int showFirstUnique() {
        if(l.size() >= 1) return l.front();
        else return -1;
    }
    
    void add(int value) {
        if(m.find(value) != m.end()){
            auto iter = m[value];
            if(iter != l.end()){
                l.erase(iter);
                m[value] = l.end();
            }
        }else{
            l.push_back(value);
            auto iter = l.end();
            iter--;
            m[value] = iter;
        }
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */
