class LRUCache {
    map<int, int> _m;
    int cap;
    int size;
    list<pair<int, int>> l;
public:
    LRUCache(int capacity) {
        size=0;
        cap = capacity;
    }
    
    int get(int key) {
        
       if(_m[key]) {
           int val = _m[key];
           l.remove(make_pair(key, val));
           l.push_front(make_pair(key, val));
           return val;
       }
        return -1; 
    }
    
    void put(int key, int value) {
        
        if(_m[key]){
                int val = _m[key];
                l.remove(make_pair(key, val));
        }else{
            if(size < cap) size++; 
            else{
                _m.erase(_m.find(l.back().first));
                l.pop_back();  
            }

        }    
        _m[key] = value;
        l.push_front(make_pair(key, value));
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
