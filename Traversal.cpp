#include<iostream>
using namespace std;
int main(){
   int A[]={1,2,3,4,5};
   int size = sizeof(A)/sizeof(int);
   for(int i=1;i<=size;i++){
    cout<<"Traversal "<<i<<endl;
   }
    return 0;
}