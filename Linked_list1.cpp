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

void insert_at_head(node *&head,int x ){
    node *new_node = new node(x); 
    new_node->next=head;
    head = new_node;
}

void display(node* head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> "; 
        temp=temp->next; 
    }
    cout<<"NULL"<<endl;
}

int main(){
   node *head = NULL;
   insert_at_head(head,3);
   display(head);
   cout<<endl;
   insert_at_head(head,2);
   display(head);
   cout<<endl;
   insert_at_head(head,1);
   display(head);
    return 0;
}
