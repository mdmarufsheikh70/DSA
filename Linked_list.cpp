#include<iostream>
using namespace std;

class node{
   public:
   int data;
   node *next;
   
    node(int x){
        data=x;
        next=NULL;
   }
};

int main(){
    node *head = new node(10);
    node *N1 = new node(20);
    head->next = N1;
    cout<<head->next->data<<endl;
    cout<<N1->data;
    return 0;
}