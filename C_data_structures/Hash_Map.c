#include<stdio.h>
#include<string.h>
#define MAX 26

typedef struct node{
    char * value;//because we has name in the linked list
    struct node* next;

}NODE;

// globally decalaring an array
NODE* arr[MAX];
// char *  means we are giving the string ( array of character)
unsigned int hash_Function(char* name){
    //  in this hash function we will add the ascii value of all the characters and then perform some task
    int sum=0;
    for(int i=0;name[i]!='\0';i++){
        sum+=name[i];// adding all the ascii values
        
    }
    return sum%MAX;
}

NODE* get_node(void){
    NODE* newNode=malloc(sizeof(NODE));
    return newNode;
}
void insert(char* name,int n){
    // here the arr[something]= first of an linked list 
    NODE* newNode=get_node();// initializing a node
    // if first element is empty
    newNode->value = name; //we have to copy the string
    // strcpy(name,newNode->value);

    newNode->next = NULL;
    newNode->next = arr[n];
    arr[n] = newNode;
    // return arr[n]; // we dont need to return that bcz that array is globally declared

}

void search(char* name){
    int q=hash_Function(name);
    int counter=1;
    NODE* temp=arr[q]; // first of the relative linked list
    while(temp!=NULL){
        if(strcmp(temp->value,name)==0){
            printf("%s is Present at %d at index q=%d ",name,counter,q);
            break;
        }
        counter++;
    }

}


void print_hash_table(){
    for(int i=0;i<MAX;i++){
        NODE* temp=arr[i];
        while(temp!=NULL){
            printf("%s\t",temp->value);
            temp=temp->next;
        }
        printf("\n");
    }
}

int main(){
    char* name=malloc(sizeof(char)*20);
    int k=6;
    printf("Enter 6 names less than 20 charachter aukat mai : \n");
    while(k>0){
        scanf("%s",name);
        int location=hash_Function(name);
        insert(name,location);
        k--;
    }

    print_hash_table();
    printf("\nEnter the name you want to search: \n");
    scanf("%s",name);
    search(name);

}

