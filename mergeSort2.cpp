#include<bits/stdc++.h>
using namespace std;
//template<class int>
void merge(int* arr, int* B, int* A);
//template<class int>
void mergeSort(int *arr, int n, int p)
{
    int A[(n/2)];
    int B[(n/2)];
    int k = 0, i, j;
    if(n > 1)
    {
        cout<<"bhai aabhi" <<p<<endl;
    // int* A = new int [n/2 - 1];
    // int* B = new int [n/2 - 1];

    for(i = 0; i <= n/2 -1; i++)
    {
        A[i] = arr[i];
    }
    for(i = n/2 ,k=0; i < n ; i++,k++)
    {
        B[k] = arr[i];
    }
    mergeSort(B, k, p + 1);
    mergeSort(A, i, p + 1);
   // merge(arr,B,A);
    }
}
// template<class int>
void merge(int* arr, int* B, int* A)
{   
    int p,q,n;
    int i=0,j=0,k=0;
    p=sizeof(B)/sizeof(int);q=sizeof(A)/sizeof(int);n=sizeof(arr)/sizeof(int);
    while(i < p && j < q)
    {
        while(B[i] < A[j] )
        {
            arr[k] = B[i];
            i++;
        }
        while(B[i] > A[j])
        {
            arr[k]  = A[j];
            j++;
        }
        k++;
    }
    if(k == p-1)
    {
        while(j <  q)
        {
            arr[k++] = A[j++]; 
        }
            
    }
    else
    {
        while(i <  p)
        {
            arr[k++] = A[i++]; 
        }
            
    }
    

}
void display(int* arr, int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}


int main(){
    int n;

    cout<<"Enter the numebr of elements: "<<endl;
    cin>>n;
    int arr[n] ;//= new int [n];
     for(int i = 0; i<n; i++)
     {
        cin>>arr[i];
     }
    cout<<"Arr before sorting\n";
    display(arr,n);
    mergeSort(arr, n,1);
    cout<<"Arr after sorting:\n";
    display(arr, n);
    return 0;
}