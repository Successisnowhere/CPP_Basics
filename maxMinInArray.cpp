#include<climits>
#include<iostream>
using namespace std;

void MaxMin(int *a,int n,int &maxm,int &minm,int i){
       if(i <= n-1){
         maxm=max(a[i],maxm);
         minm=min(a[i],minm);
         MaxMin(a,n,maxm,minm,i+1);
       }
        // MaxMin(a,n,maxm,minm,i+1);
        // cout<<"maxm : "<<maxm<<endl;
        // cout<<"minm : "<<minm<<endl;


}


int main(){
     int n;
    int maxm=INT_MIN;
    int minm=INT_MAX;
    cout<<"Enter the no of the elements"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements for the array"<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  
    MaxMin(a,n,maxm,minm,0);
    cout<<"maxm : "<<maxm<<endl;
    cout<<"minm : "<<minm<<endl;


    return 0;
}