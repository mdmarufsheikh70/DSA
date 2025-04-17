#include <iostream>
using namespace std;

const int s = 4;

class Queue {
 private:
    int Q[s];
    int f;
    int r;

 public:
    Queue() {
        f = -1;
        r = -1;
    }
    
    void enqueue(int x) {
        if (r >= s - 1) {
            cout << "Queue is overflow" << endl;
        }
         else
        {
            if (f == -1) {
                f = 0;
            }
            r++;
            Q[r] = x;
            cout << "Enqueued: " << x << endl;
        }
    }
    
    void dequeue() {
        if (f == -1 || f > r) {
            cout << "Queue is empty" << endl;
        } 
        else
        {
            cout << "Dequeued value: " << Q[f] << endl;
            f++;
        }
    }
};

int main() {
    Queue q;

    cout << endl;
    q.enqueue(50);
    q.enqueue(40);
    q.enqueue(30);
    q.enqueue(20);
    q.dequeue();
    q.enqueue(50);
    q.dequeue();
    q.enqueue(50);
    cout << endl;
    return 0;
}
