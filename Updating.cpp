#include<iostream>
using namespace std;
int main(){
    int value=100;
    int A[50]={10,20,30,40,50};
    cout<<"previous Array: ";
    for(int i=0;i<5;i++){
        cout<<A[i]<<"\t";
    }
    cout<<endl;
    A[2]=value;
    cout<<"After updating: ";
     for(int i=0;i<5;i++){
        cout<<A[i]<<"\t";
    }
    return 0;
}