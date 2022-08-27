#include<iostream>
using namespace std;

void bubble_sort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<=n-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int binary_search(int a[],int n,int key){
    int low=0;
    int high=n-1;
    while(low<=high){
       int mid=(low+high)/2;
       if(a[mid]==key){
        return mid;
       }else if(a[mid]>key){
            high=mid-1;
       }else if(a[mid]<key){
            low=mid+1;
       }
    }
    return -1;



}

int main(){
    int n;
    cout<<"Enter the no of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter "<<n <<"elements for the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //Bubble sort 

    bubble_sort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" , ";
    }
    int key,position;
    cout<<"Enter the key"<<endl;
    cin>>key;
    position=binary_search(a,n,key);
    if(position==-1){
        cout<<"key not found"<<endl;
    }else{
        cout<<"key found at"<<position<<endl;
    }

    
    
    
    return 0;
}