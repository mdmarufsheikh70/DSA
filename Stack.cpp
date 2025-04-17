#include <iostream>
using namespace std;

// Stack implementation using array
class StackArray {
private:
    static const int MAX = 100;
    int arr[MAX];
    int top = -1; // Direct initialization

public:
    bool push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow" << endl;
            return false;
        } else {
            arr[++top] = x;
            return true;
        }
    }
    
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
            return -1;
        } else {
            return arr[top--];
        }
    }
    
    int peek() {
        if (top < 0) {
            cout << "Stack is Empty" << endl;
            return -1;
        } else {
            return arr[top];
        }
    }
    
    bool isEmpty() {
        return (top < 0);
    }
    void display(){
        for(int i=0;i<top;i++){
            cout<<arr[i];
        }
    }
};

int main() {
    // Using our custom stack
    StackArray s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    cout << "Top element: " << s1.peek() << endl;
    // cout << "Popped element: " << s1.pop() << endl;
    // cout << "Popped element: " << s1.pop() << endl;
    cout << "Stack is empty: " << (s1.isEmpty() ? "Yes" : "No") << endl;

    s1.display();
    
    return 0;
}
