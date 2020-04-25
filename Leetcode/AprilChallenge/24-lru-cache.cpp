//Day 24 of Leetcode 30 days challenge, by Kartik Mohan
// LRU Cache
class LRUCache {
public:
    int size;
    unordered_map<int,pair<int,list<int>::iterator>> ump;
    list<int> qu;
    LRUCache(int capacity) {
        size=capacity;
    }
    
    int get(int key) {
        if(ump.count(key)==0) return -1;
        else{
            qu.erase(ump[key].second);
            qu.push_front(key);
            ump[key].second=qu.begin();
            return ump[key].first;
        }
    }
    
    void put(int key, int value) {
        if(ump.count(key)!=0)
        {
            qu.erase(ump[key].second);
            qu.push_front(key);
            ump[key].second=qu.begin();
            ump[key].first=value;
        }
        else
        {
            if((int)ump.size()<size)
            {
                qu.push_front(key);
                ump[key].second=qu.begin();
                ump[key].first=value;
            }
            else
            {
                ump.erase(qu.back());
                qu.pop_back();
                qu.push_front(key);
                ump[key].second=qu.begin();
                ump[key].first=value;
            }
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
