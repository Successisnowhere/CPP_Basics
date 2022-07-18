#include<iostream>
using namespace std;

void sort(){
    int arr[5], brr[5];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    for(int i=0; i<5; i++){
        for(int j=i+1; j<4; j++){
            if(arr[i]<arr[j]){
                brr[i]=arr[i];
            }else{
                brr[i]=arr[j];
            }
        }
    }
}
int main(){

// int n;
// cout<<"Enter the number of the array"<<endl;
// cin>>n;
// int a[n];
// cout<<"Enter an element of array :"<<endl;
// for(int i=0; i<n;i++){
//     cin>>a[i];
// }

// cout<<"the array elements are :"<<endl;

// for (int i = 0; i < n; i++)
// {   
//     cout<<a[i]<<'\t';

//     /* code */
// }
// int b[n];
// //  now i have to sort the array 
// cout<<"the sorted array is : "<<endl;
// for (int i = 0; i < n; i++)
// {   
//     for (int j = i; j < n; j++)
//     {
//         if(a[i]<a[j+1])
//             b[i]=a[i];
//         else    
//             b[i]=a[j+1];
//         /* code */
//     }
// }
// for(int i=0; i<n;i++){
//     cout<<b[i];

// }

sort();

return 0;
}