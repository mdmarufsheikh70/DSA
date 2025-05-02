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
        auto it = search_key(key);
        if (it != hashtable[index].end()) {
            hashtable[index].erase(it);
            cout <<"\n"<< key << " key is deleted\n" << endl;
        } else {
            cout <<"\n"<< key << " not found!\n" << endl;
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
    h.add_key(7);
    h.display();

    h.delete_key(27);
    h.display();
    return 0;
}