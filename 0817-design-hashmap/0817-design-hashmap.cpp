class MyHashMap {
private:
    vector<pair<int, int>>data;
public:
    MyHashMap() {
      //initializes an object with an emoty map  
    }
    
    void put(int key, int value) {
        for(int i=0; i<data.size(); i++){
            if(data[i].first==key){
                data[i].second=value; //update the value, if the key already exists
                return;
            }
        }
        data.push_back({key, value}); //insert (key, value) pair in the hashmap
    }
    
    int get(int key) {
        for(int i=0; i<data.size(); i++){
            if(data[i].first==key){ //if key found
                return data[i].second; //return value
            }
        }
        return -1; //if key not found
    }
    
    void remove(int key) {
        for(int i=0; i<data.size(); i++){
            if(data[i].first==key){
                data.erase(data.begin()+i); //remove the pair with the specified key
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */