#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int x):data(x){
        next=NULL;
    }
};

class circular_linked_list{
    public:
    node *head;
    circular_linked_list(){
        head=NULL;
    }

    void insert_at_head(int x){
        node *new_node=new node(x);
        if(head==NULL){
            head=new_node;
            new_node->next=head;
            return;
        }
        node *tail=head;
        while (tail->next!=head){
            tail=tail->next;
        }
        tail->next=new_node;
        new_node->next=head;
        head=new_node;        
    }
    void insert_at_tail(int x){
        node *new_node=new node(x);
        if(head==NULL){
            head=new_node;
            new_node->next=head;
            return;
        }
        node *tail=head;
        while (tail->next!=head)
        {
            tail=tail->next;
        }
        tail->next=new_node;
        new_node->next=head;
        head=new_node;
    }

    void insert_at_any_position(int x,int position) {
    if (position == 1) {
        insert_at_head(x);
        return;
    }
        node *new_node = new node(x);
        node *temp = head;
        int current_position =1;
    while (temp->next!=head && current_position < position-1) {
        temp = temp->next;
        current_position++;
    }

    if (temp->next==head) {
        insert_at_tail(x);
    } 
    else {
        new_node->next = temp->next;
        temp->next = new_node;
    }
    }

    void update (int x, int updated_pos){
    node *temp=head;
    int current_pos=1;
    while(current_pos < updated_pos){
         temp =temp->next;
         current_pos++;
    }
    temp->data=x;
    }

    void delete_at_head(){
        if(head==NULL){
            return;
        }
        node *temp=head;
        node *tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        head=head->next;
        tail->next=head;
        delete(temp);
    }
    void delete_at_tail(){
        if(head==NULL){
            return;
        }
        node *tail=head;
        while(tail->next->next!=head){
            tail=tail->next;
        }
        node* temp=tail->next;
        delete(temp);
        tail->next=head;
    }
    void delete_at_any_position(int position){
    if(position==1){
        delete_at_head();
        return;
    }
    int currant_positin=1;
    node *tail=head;
    while(currant_positin!=position-1){
        tail=tail->next;
        currant_positin++;
    }
    node *temp=tail->next;
    tail->next=tail->next->next;
    delete(temp);
}    

    void display(){
        node *temp=head;
        do{
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }while(temp!=head);        
    }
};

int main(){
    circular_linked_list cll;
    cll.insert_at_head(2);
    cll.display();
    cout<<endl;
    
    cll.insert_at_head(1);
    cout<<"<- ";
    cll.display();
    cout<<endl;
    
    cll.insert_at_tail(3);
    cout<<"<- ";
    cll.display();
    cout<<endl;

    cll.insert_at_any_position(5,3);
    cout<<"<- ";
    cll.display();
    cout<<endl;

    cll.update(9,3);
    cout<<"<- ";
    cll.display();
    cout<<endl;

    cll.delete_at_any_position(4);
    cout<<"<- ";
    cll.display();
    cout<<endl;

    cll.insert_at_any_position(5,3);
    cout<<"<- ";
    cll.display();
    cout<<endl;

    cll.delete_at_head();
    cout<<"<- ";
    cll.display();
    cout<<endl;

    cll.delete_at_tail();
    cout<<"<- ";
    cll.display();
    cout<<endl;

    cll.delete_at_any_position(1);
    cout<<"<- ";
    cll.display();
    cout<<endl;

    cll.insert_at_tail(3);
    cout<<"<- ";
    cll.display();
    cout<<endl;

     cll.delete_at_tail();
    cout<<"<- ";
    cll.display();
    cout<<endl;
    return 0;
}