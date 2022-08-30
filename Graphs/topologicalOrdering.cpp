#include<iostream>
using namespace std;
// globally decalring 
int temp[10],k=0;

void topo(int a[10][10],int *indegree,int n){
    int i,j;
    // checking for the vertice having indegree 0 ( as starting vertice)
    for(i=1;i<=n;i++){
        if(indegree[i]==0){
            // mean we have got the first vertice
            temp[++k]=i;// storing the first verice 
            indegree[i]=1; // updating the indegree so that next vertice will be evaluated
            
            // checking for the next vertice in the matrix having value 1 ( indegree =1) will be the next vertice
            for(j=1;j<=n;j++){
                if(a[i][j]==1 && indegree[j]!= -1 ){
                    indegree[j]--;
                }
            }
                i=0;
        }
    }
   
        
    
}

int main(){
    int n;
    cout<<"Enter the no of vertices"<<endl;
    cin>>n;

    // defining an matrix
    int a[10][10];
    int indegree[10];
    for(int i=1;i<=n;i++){
        for (int j = 1; j <=n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    // indegree array
    for (int i = 1; i<=n; i++)
    {
      for(int j=1;j<=n;j++)
        indegree[j]+=a[i][j];
    }

    // for(int i=1;i<=n;i++){
    //     cout<<indegree[i]<<"\t";
    // }
    topo(a,indegree,n);

    for(int i=1;i<=k;i++){
        cout<<"v"<<temp[i]<<"->";
    }

  

    
    return 0;
}