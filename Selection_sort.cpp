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

    cout<<"Before appling Selection sort: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;

    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        tem=a[i];
        a[i]=a[min];
        a[min]=tem;
    }
    
    cout<<"After  appling Selection sort: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}