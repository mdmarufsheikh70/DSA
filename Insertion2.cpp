#include<iostream>
using namespace std;
int main(){
    int p=3;
    int value=100;
    int A[50]={10,20,30,40,50};
    cout<<"previous Array: ";
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<"\t";
    }
    cout<<endl;
    for(int i=4;i>=p-1;i--){
    A[i+1]=A[i];
    }
    A[2]=value;
    cout<<"After insertion: ";
     for(int i=0;i<=5;i++)
    {
        cout<<A[i]<<"\t";
    }
    return 0;
}