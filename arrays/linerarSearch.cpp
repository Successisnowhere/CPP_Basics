#include<iostream>
using namespace std;
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
cout<<"Enter the key to be found"<<endl;
cin>>key;
int i;
for(i=0;i<n-1;i++){
    if(a[i]==key){
        cout<<"The key is found at position "<<i<<endl;
        break;
    }
}
// i=n is only in that case when the key is not found in the whole array
if(i==n){
    cout<<"The key is not found"<<endl;
}
    
return 0;
}
