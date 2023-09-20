#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}Node;
struct node *head,*tail;
struct node * newNode(int data){
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    if(head==NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail= newNode;
    }
    return newNode;
}

void traverse(struct node *ptr){
    printf("Traversal");
    if(ptr->next==NULL){
        printf("PTR next is null!!!");
    }
    do{
        printf("\nData: %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=NULL);
}

int main(){
    struct node *node;
    int choice=1,data;
    while(choice){
        printf("Enter the data: ");
        scanf("%d",&data);
        node = newNode(data);
        printf("Want to continue: ? (y1,n0): ");
        scanf("%d",&choice);
        if(choice==0){
            node->next=NULL;
        }
    }
    // printf("\nHead: %d",head->data);
    // printf("\n Next node addr: %p",head->next);
    traverse(head);
    // struct node *temp = head->next;
    // printf("\n data: %d",temp->data);
    return 0;
}