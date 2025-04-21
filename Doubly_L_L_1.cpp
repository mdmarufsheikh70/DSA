#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *previous;
    node(int x):data(x){
        next=NULL;
        previous=NULL;
    }
};

class doubly_link_list{
    public:
    node *head;
    node *tail;
    doubly_link_list(){
        head=NULL;
        tail=NULL;
    }

    void insert_at_head(int x){
        node *new_node=new node(x);
        if(head==NULL){
        head=new_node;
        tail=new_node;
        return;
        }
        new_node->next=head;
        head->previous=new_node;
        head=new_node;
        return; 
    }
    
    void inset_at_tail(int x){
        node *new_node=new node(x);
        if(tail==NULL){
            head=new_node;
            tail=new_node;   
            return;
        }
        tail->next=new_node;
        new_node->previous=tail;
        tail=new_node;
        return;
    }

    void insert_at_any_position(int x,int position){
        if(position==1){
            insert_at_head(x);
            return;
        }
        node *new_node=new node(x); 
        node *temp=head;
        int c_position=1;
        while(c_position!=position-1){
            temp=temp->next;
            c_position++;
        }
        if(temp->next==NULL){
            inset_at_tail(x);
            return;
        }
        new_node->next=temp->next;
        temp->next=new_node;
        new_node->previous=temp; 
        new_node->next->previous=new_node;   
    }

    void delete_at_head(){
        if(head==NULL){
            return;
        }
        node *temp=head;
        head=head->next;
        if(head==NULL){
            tail==NULL;
        }
        else{
        head->previous=NULL;
        delete(temp);
        return;    
        }
    }

    void delete_at_tail(){
        if(head==NULL){
            tail==NULL;
            return;
        }
        node *temp=tail;
        tail=tail->previous;
        if(tail==NULL){
            head==NULL;
        }
        else{
            tail->next=NULL;
        }
        delete(temp);

        return;
    }

    void delete_at_any_position(int position){
        int c_position=1;
        if(position==1){
            delete_at_head();
            return;
        }
        node *temp=head; 
        while (c_position!=position)
        {
            temp=temp->next;
            c_position++;
        }
        if(temp->next==NULL){
            delete_at_tail();
            return;
        }
        temp->previous->next=temp->next;
        temp->next->previous=temp->previous;
        delete(temp);
        return;
    }
    
    void update_at_any_position(int x,int position){
        if(position==1){
            head->data=x;
            return;
        }
        int c_position=1;  
        node *temp=head; 
        while (c_position!=position)
        {
            temp=temp->next;
            c_position++;
        }
        temp->data=x;
    }
    void display(){
        node *temp=head;
        cout<<"NULL <-> ";
        while(temp!=NULL){
            cout<<temp->data<<" <-> "; 
            temp=temp->next;
        }
        cout<<" NULL\n";
    } 
};   

int main(){
    doubly_link_list dll;
    cout<<endl;
    cout<<"Insert at head"<<endl;
    dll.insert_at_head(4);
    dll.display();
    cout<<endl;
    dll.insert_at_head(2);
    dll.display();
    cout<<endl;
    dll.insert_at_head(1);
    dll.display();
    cout<<endl;

    cout<<"Insert at tail"<<endl;
    dll.inset_at_tail(5);
    dll.display();
    cout<<endl;

    cout<<"Insert at any position"<<endl;
    dll.insert_at_any_position(3,3);
    dll.display();
    cout<<endl;

    cout<<"Delete at head"<<endl;
    dll.delete_at_head();
    dll.display();
    cout<<endl;

    cout<<"Delete at tail"<<endl;
    dll.delete_at_tail();
    dll.display();
    cout<<endl;

    cout<<"Delete at any position"<<endl;
    dll.delete_at_any_position(2);
    dll.display();
    cout<<endl;

    cout<<"Update at any position"<<endl;
    dll.update_at_any_position(3,2);
    dll.display();
    cout<<endl;
    return 0;
}