//Easiest Approach || Time Complexity : O(1)
class MyHashMap {
public:
    unordered_map<int,int> mp;
    MyHashMap() {
        //HELLO
    }
    
    void put(int key, int value) {
        mp[key]=value;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end())
        return mp[key];
        else
        return -1;
    }
    
    void remove(int key) {
        mp.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */