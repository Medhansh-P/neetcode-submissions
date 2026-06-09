class MyHashSet {
private:
    vector<int> v;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        for(int i=0;i<v.size();i++){
            if(v[i]==key) return;
        }
        v.push_back(key);
    }
    
    void remove(int key) {
        int idx=-1;
        for(int i=0;i<v.size();i++){
            if(v[i]==key){
                idx=i;
                break;
            }
        }
        if(idx==-1) return;
        v.erase(v.begin()+idx);
    }
    
    bool contains(int key) {
        for(int i=0;i<v.size();i++){
            if(v[i]==key) return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */