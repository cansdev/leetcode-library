class MyHashMap {
public:
    int size;
    vector<int> mapArray;

    MyHashMap() {
        size = 111111;
        mapArray.resize(size,-1);
    }
    
    
    void put(int key, int value) {
        if (key < 0) {
            cout << "Incorrect index." << endl;
            return;
        }
        while (key > size) {
            mapArray.push_back(-1);
            size++;
        }

        mapArray[key] = value;
    }
    
    int get(int key) {
        if(key < 0 || key > size) {
            cout<<"Invalid key.";
            return -1;
        } 
        return mapArray[key];   
    }
    
    void remove(int key) {
        mapArray[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */