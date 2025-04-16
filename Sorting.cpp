#include<iostream>
using namespace std;
int main(){
    int A[5] = {50,20,30,40,10};
    cout<<"Before sorting : ";
    for(int i = 0; i < 5; i++){
    cout<<A[i] << "\t";
  }
  cout<<endl;
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 5; j++){
        if(A[j]< A [j+1]){
            int tem = A[j];
            A[j] = A[i];
            A[i] = tem;
        }
    }
  }
   cout<<"After sorting : ";
  for(int i = 0; i < 5; i++){
  cout<<A[i]<<"\t";
  }
return 0;
}
