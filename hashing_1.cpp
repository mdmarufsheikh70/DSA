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

    list<int>::iterator search_key(int key) {
        int index = hashvalue(key);
        return (find(hashtable[index].begin(), hashtable[index].end(), key));
    }

    void delete_key(int key) {
        int index = hashvalue(key);
        if(search_key(key) != hashtable[index].end()) {
            hashtable[index].erase(search_key(key));
            cout << key << " key is deleted" << endl;
        }
    }

    void update(int old_key, int new_key) {
        int index = hashvalue(old_key);
        for (auto it = hashtable[index].begin(); it != hashtable[index].end(); ++it) {
            if (*it == old_key) {
                *it = new_key;
                cout << old_key << " updated to " << new_key << endl;
                return;
            }
        }
        cout << old_key << " not found, cannot update" << endl;
    }
    

    void display () {
        for (int i = 0; i < hashtable.size(); i++) {
            cout << "Bucket " << i << ": ";
            for (int value : hashtable[i]) {
                cout << value << " -> ";
            }
            cout << "NULL" << endl;
        }
    }
    

};

int main() {
    hashing h(10);

    h.add_key(10);
    h.add_key(27);
    h.add_key(7);

    h.display();

    h.update(27,37);
    h.display();
    return 0;
}