#include<iostream>
using namespace std;

void My_Array1(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    cout<<endl<<"Before applying Merge sort: ";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<"\t";
    }
    cout<<endl;
}

void Merge(int A[], int low, int mid, int high)
{
    int i, j, k, B[high];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}

void MergeSort(int A[], int low, int high){
    int mid;
    if(low<high){
        mid = low + (high - low) /2;
        MergeSort(A, low, mid);
        MergeSort(A, mid+1, high);
        Merge(A, low, mid, high);
    }
}
void My_Array2(int A[], int n)
{
     cout<<"After  applying Merge sort: ";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<"\t";
    }
    cout<<endl;
}

int main()
{
    cout<<"Enter your array size: ";
    int n;
    cin>>n;
    int A[n];
    My_Array1(A, n);
    MergeSort(A, 0, n-1);
    My_Array2(A, n);
    return 0;
}
