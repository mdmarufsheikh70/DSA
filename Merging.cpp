#include<iostream>
using namespace std;
int main()
{
    int A[5]={1,2,3,4,5},B[5]={6,7,8,9,10},C[10];
    cout<<"Before merging A : ";
    for(int i=0;i<5;i++) 
    {
       cout<<A[i]<<"\t";
    }
    cout<<endl;
    cout<<"Before merging B : ";
    for(int i=0;i<5;i++)
    {
        cout<<B[i]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        C[i]=A[i];
    }
    for(int i=5;i<10;i++)
    {
        C[i]=B[i-5];
    }
    cout<<"After merging A+B : ";
    for(int i=0;i<10;i++)
    {
       cout<<C[i]<<"\t";
    }
    return 0;
}