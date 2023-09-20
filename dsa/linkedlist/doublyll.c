#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}Node;

Node *head,*tail,*ptr;

Node *newNode(int data){
    Node *newnode = (Node *) malloc(sizeof(Node));
    newnode->data = data;
    if(head==NULL){
        head = newnode;
        tail = newnode;
        head->prev=NULL;
    }
    else{
        tail->next = newnode;
        newnode->prev = tail;
        tail=newnode;
    }
}

void traversefor(struct node *ptr){
    printf("Traversal");
    if(ptr->next==NULL){
        printf("PTR next is null!!!");
    }
    do{
        printf("\nData: %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=NULL);
}

void traverseback(struct node *ptr){
    do{
        printf("\n Data: %d\n",ptr->data);
        ptr=ptr->prev;
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
    traverseback(tail);
    // struct node *temp = head->next;
    // printf("\n data: %d",temp->data);
    return 0;
}