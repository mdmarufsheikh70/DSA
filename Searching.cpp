#include<iostream>
using namespace std;
int main(){
    int A[50],n,yn;
    cout<<"array size:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"your searching number:";
    cin>>yn;
        for(int j=0;j<n;j++){
            if(A[j]==yn){
                cout<<"your number has index "<<j;
                break;
            }
        }
    return 0;
}