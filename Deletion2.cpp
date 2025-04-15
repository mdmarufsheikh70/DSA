#include<iostream>
using namespace std;
int main(){
    int p=3;
    int A[50]={10,20,30,40,50};
    cout<<"previous Array: ";
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<"\t";
    }
    cout<<endl;
    for(int i=p-1;i<4;i++){
    A[i]=A[i+1];
    }
    cout<<"After deletion: ";
     for(int i=0;i<4;i++)
    {
        cout<<A[i]<<"\t";
    }
    return 0;
}