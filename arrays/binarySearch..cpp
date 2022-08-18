#include<iostream>
using namespace std;

 int binary_Search(int a[],int n,int key){
    int start=0;
    int end=n-1;
    while(start<=end){
    int mid=(start+end)/2;
        if(a[mid]==key){
            return mid;
        }
        if(a[mid]<key){
            start=mid+1;
        }else if(a[mid]>key){
            end=mid-1;
        }
    }
    return -1;
 }
int main(){
    int n;
    cout<<"Enter the no of the element in array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" elements for the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Your entered array is :"<<endl;
    for(int i=0;i<n;i++){
    cout<<a[i]<<'\t';
}
    int key;
    cout<<"\nEnter the key for search in the array"<<endl;
    cin>>key;
    int location;
    location=binary_Search(a,n,key);
    if(location!=-1){
        cout<<"The key is present at "<<location<<" position"<<endl;

    }
    else{
        cout<<"The key is not found"<<endl;
    }

return 0;
}