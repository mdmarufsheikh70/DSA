#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;

    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insert_at_head(node *&head, int x) {
    node *new_node = new node(x);
    new_node->next = head;
    head = new_node;
}

void insert_at_tail(node *&head, int x) {
    node *new_node = new node(x);

    if (head == NULL) {
        head = new_node;
    } else {
        node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void insert_any_position(node *&head,int position,int x) {
    if (position == 1) {
        insert_at_head(head, x);
        return;
    }

    node *new_node = new node(x);
    node *temp = head;
    int current_position = 1;

    
    while (temp != NULL && current_position < position-1) {
        temp = temp->next;
        current_position++;
    }

    if (temp == NULL) {
        
        insert_at_tail(head, x);
    } else {
        new_node->next = temp->next;
        temp->next = new_node;
    }
}

void update (node *&head, int x, int updated_pos){
    node *temp=head;
    int current_pos=1;
    while(current_pos < updated_pos){
         temp =temp->next;
         current_pos++;
    }
    temp->data=x;
}

void display(node *head) {
    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    node *head = NULL;
    insert_at_head(head, 2);
    display(head);
    cout << endl;
    insert_at_head(head, 1);
    display(head);
    cout << endl;
    insert_at_tail(head, 4);
    display(head);
    cout << endl;
    insert_at_tail(head, 5);
    display(head);
    cout << endl;
    insert_any_position(head, 3, 3);
    display(head);
    cout << endl;
    update(head,30,1);
    display(head);
    return 0;
}