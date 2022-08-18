#include<iostream>
#include<climits>
#include<math.h>
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
int smallest=INT_MAX;
int largest=INT_MIN;
    for(int i=0;i<n;i++){
        largest=max(largest,a[i]);
        smallest=min(smallest,a[i]);
    }

cout<<"\nlargest element in the array :"<<largest<<endl;
cout<<"smallest element in the array :"<<smallest<<endl;
return 0;
}