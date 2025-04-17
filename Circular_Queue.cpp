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
        f= -1;
        r= -1;
    }
    void enqueue(int x) {
        if (f==-1&&r==-1) {
            f=r=0;
            Q[r]=x;      
        } 
        else if((r+1)%s == f){
                cout << "full" << endl;
            }
        else{
            r=(r+1)%s;
            Q[r]=x;
        }
    }
    void dequeue() {
        int y;
        if((f==-1)&&r==-1){
            cout << "empty" << endl;
        }
        else if (f==r) {
            y=Q[f];
            f=r=-1;
        } 
        else {
            y=Q[f];
            f=(f+1)%s;
            cout << "the dequeue value is "<<y << endl;
        }
    }
};

int main() {
    Queue q;

    cout<<endl;
    q.enqueue(50);
    q.enqueue(40);
    q.enqueue(30);
    q.enqueue(20);
    q.dequeue();
    q.enqueue(50);
    q.dequeue();
    cout<<endl;
    return 0;
}