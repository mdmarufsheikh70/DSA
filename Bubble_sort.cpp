#include<iostream>
using namespace std;
int main()
{
    int a[20],n,tem;
    cout<<"Entet your array size: ";
    cin>>n;
    cout<<"Input element of array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Before appling Bubble sort: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;

    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                tem=a[j];
                a[j]=a[j+1];
                a[j+1]=tem;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    
    cout<<"After  appling Bubble sort: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}