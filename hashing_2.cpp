#include<bits/stdc++.h>
using namespace std;

class hashing {
    public:
    vector<list<int>> hashtable;
    int buckets;

    hashing(int size) {
        buckets = size;
        hashtable.resize(size);
    }

    int hashvalue(int key) {
        return key % buckets;
    }

    void add_key(int key) {
        int index = hashvalue(key);
        hashtable[index].push_back(key);
    }

    void search_key(int key) {
        int index = hashvalue(key);
        auto it = find(hashtable[index].begin(), hashtable[index].end(), key);
    
        if (it != hashtable[index].end()) {
            int pos = 0;
            for (auto i = hashtable[index].begin(); i != it; ++i) {
                pos++;
            }
            cout << "Found in bucket " << index << " at position " << pos << endl;
        } else {
            cout << "Not found in any bucket." << endl;
        }
    }
    

    void display () {
        for (int i = 0; i < hashtable.size(); i++) {
            cout << "Bucket " << i << ": ";
            for (int val : hashtable[i]) {
                cout << val << " -> ";
            }
            cout << "NULL" << endl;
        }
    }
    

};

int main() {
    hashing h(10);

    h.add_key(10);
    h.add_key(27);
    h.add_key(30);

    h.display();
    
    h.search_key(30);
    
    return 0;
}