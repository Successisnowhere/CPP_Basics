#include<bits/stdc++.h>
using namespace std;
void show(int *a,int n)
{
    cout<<"[";
    for(int i=0; i<n; i++)
        cout<<setw(4)<<a[i]<<"\t";
    cout<<"]";
}
int part(int *a,int l,int r){
    // pivote element
    int p=a[l];// first element taking as pivote element
    int i=l;
    int j=r+1;
    // while(j >= i)
    // {
    // while( p > a[j])
    // {
    //     --j;
    // }
    // while(p < a[i])
    // {
    //     ++i;
    // }
    // swap(a[i], a[j]);
    // }
    
    do{
       
    do{
            i++;
     }while(a[i] < p);
    do{
            j--;
      }
    while(a[j] > p);
         swap(a[i],a[j]);
    }while(j >= i);
    swap(a[i],a[j]);
    swap(a[l],a[j]);
    return j;
}
// quick sort 
void qs(int a[],int l,int r){
    int s;
    if(l<r){
        s=part(a,l,r);
        qs(a,l,s-1);
        qs(a,s+1,r);
    }

}

int main(){
    int n;
    cout<<"Enter the no of the elements"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements for the array"<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    qs(a,0,n-1);
    show(a,n);
    
    return 0;
}