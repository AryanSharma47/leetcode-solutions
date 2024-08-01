//First Approach Using vector || Time Complexity : O(1)
class MyHashSet {
private:
       vector<int> v;
public:
    MyHashSet() {
       v.resize(1e6+5,0); 
    }
    
    void add(int key) {
       v[key]=1;
    }
    
    void remove(int key) {
        v[key]=0;
    }
    
    bool contains(int key) {
       return v[key] > 0;
    }
};


//Second Approach using Set and Unordered Map || Time Complexity : O(1)
class MyHashSet {
private:
       set<int> s;
       unordered_map<int,int> mp;
public:
    MyHashSet() {
       //HELLO 
    }
    
    void add(int key) {
       s.insert(key);
       mp[key]=1; 
    }
    
    void remove(int key) { 
        s.erase(key);
        mp[key]=0;
    
    }
    
    bool contains(int key) {
       return mp[key] > 0;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
