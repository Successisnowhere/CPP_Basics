#include<stdio.h>

typedef struct node // here node is the user define name of the datatype
{
    // define all the value that can be in this datatype
    int value;// so that 
    struct node* next;
}NODE;// so we are exporting ( struct node) as NODE
// so we don't need to type struct node all the time as we can use NODE

// defining a function that is creating the node
NODE*get_NODE(void)
{
    NODE*newNode = malloc(sizeof(NODE));// we are allocating memory with the node datatype
    return newNode;// this will return the dabba of the node
}

// inserting the node at first 
NODE* insert(NODE* first, int n)
{
    NODE*newNode = get_NODE();
    newNode->value = n;
    newNode->next = NULL;
    newNode->next = first;
    first = newNode;
    return first;

}

NODE* insert_at_last(NODE* first,int n){
    NODE* temp = NULL;
    NODE*newNode=get_NODE();
    newNode->value=n;
    newNode->next=NULL;
    // check if the linked list is empty
    if(first==NULL){
        first=newNode;
        return first;

    }else{
        temp = first;
        while(temp->next !=NULL){
            temp=temp->next;
        }
        temp ->next = newNode;
        return first;
    }

}
void display(NODE* first){
    while(first!=NULL){
        printf("%d",first->value);
        first=first->next;
    }

}

int main()
{
    int n,k;
    NODE* first=NULL;
    printf("Enter the number of elements in the linked list:");
    scanf("%d",&k);
    while(k > 0)
    {
        printf("Enter the value of NODE u want to insert:");
        scanf("%d", &n);
        first = insert_at_last(first, n);
        k--;

    }
    display(first);
}
