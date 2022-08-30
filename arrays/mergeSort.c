#include<stdio.h>
#include<stdlib.h>
void merge_Sort(int* a, int n);
void merger(int* a,int* b,int* c,int p,int q){
    int i,j,k;
    i=j=k=0;
    while(i<p && j<q)
    // {if(b[i] < c[j])
    // {
    //     a[k++] = b[i++];
    // }
    // else {
    //     a[k++] = c[j++];
    // }}
        (b[i]<c[j] )?( a[k++]=b[i++]) : (a[k++]=c[j++]);

    if(i==p){
        while(j<q)
            a[k++]=c[j++];

    }
    else{
        while (i<p)
        {
            a[k++]=b[i++];
        }
        
    }
}
void merge_Sort(int* a, int n){
    int b[20];
    int c[20];
    int i=0,j,k;
    if(n>1){
        for(i=0;i<n/2;i++){
            b[i]=a[i];
        }
        k=i;// mid point
        for(j=n/2,i=0;j<n;j++,i++){
            c[i]=a[j];
        }
        merge_Sort(b,k);
        merge_Sort(c,i);
        merger(a,b,c,k,i);
    }


}

int main(){
    int a[]={5,4,3,2,1};
    merge_Sort(a,5);

    for(int i=0;i<5;i++){
        printf("%d\t",a[i]);

    }
}