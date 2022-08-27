#include<bits/stdc++.h>
using namespace std;
void show(int *a,int n)
{
    cout<<"[";
    for(int i=0; i<n; i++)
        cout<<setw(4)<<a[i]<<"\t";
    cout<<"]";
}
void merger(int *b,int *c,int *a,int p,int q)
{
    int i,j,k;
    i=j=k=0;
    while(i<p && j<q)
        b[i]<c[j] ? a[k++]=b[i++] : a[k++]=c[j++];
    if(i==p){
        while(j<q)
            a[k++]=c[j++];
    }
    else{
        while(i<p)
            a[k++]=b[i++];
    }
}
void mergeSort(int *a,int n)
{   
    int b[n/2+1],c[n/2+1],i=0,j,k;
    if(n>1){
        for(i=0; i<n/2; i++)
            b[i]=a[i];
        k=i;// mid point
        for(j=n/2,i=0; j<n; j++,i++)
            c[i]=a[j];
        mergeSort(b,k);// starting to the mid point 
        mergeSort(c,i);// starting to the end point
        merger(b,c,a,k,i);
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
    mergeSort(a,n);

    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" , ";
    // }
    show(a,n);

    return 0;
}