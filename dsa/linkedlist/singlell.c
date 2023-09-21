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

int search(struct node* ll,int el){
    struct node* temp;
    int count=0;
    temp=ll;
    while(temp!=NULL){
        count++;
        if(temp->data==el){
            return count;
        }
        temp=temp->next;
    }
    return -1;

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

int length(struct node* ptr){
    int count=0;
    struct node* current = ptr;
    while(current!=NULL){
        count++;
        current=current->next;
    }
    return count;
}

int getcount(struct node* ptr){
    if(ptr==NULL){
        return 0;
    }
    else{
        return 1+getcount(ptr->next);
    }
}

int reverse(struct node** list){
    struct node * current = head;
    struct node * prev=NULL,*next=NULL;

    while(current!=NULL){
        next=current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
}

int deletenode(struct node *head,int el){
    struct node *tmp,*prev=NULL;
    tmp = head;
    do{
        if(tmp->data==el){
            prev->next = tmp->next;
            free(tmp);
            return 1;
        }
        else{
            prev=tmp;
            tmp=tmp->next;
        }
    }while(tmp!=NULL);
    return -1;
}

struct node* nthNode(struct node** head,int index){
    struct node* tmp;
    tmp = (*head);
    int count=0;
    while(tmp!=NULL){
        count++;
        if(count==index){
            return (*head);
        }
        else{
        (*head)=(*head)->next;
        }
    }

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
    traverse(head);
    int sel;
    printf("\nEnter the element to search:");
    scanf("%d",&sel);
    int res = search(head,sel);
    (sel!=-1)?printf("Element found at index: %d",res):printf("Element not found!");
    printf("\nLength of Linked list: %d",length(head));
    printf("\nLength of Linked list(Recursively): %d",getcount(head));
    printf("\nReverse a linked list:\n");
    reverse(&node);
    head = node;
    traverse(head);
    int delel;
    printf("\nEnter the element to delete: ");
    scanf("%d",&delel);
    int delstat = deletenode(head,delel);
    if(delstat>0){
        printf("\nElement %d Deleted from linked list",delel);
        traverse(head);
    }
    else{
        printf("\nElement %d not found in linked list.",delel);
    }
    struct node * nodetoget;
    nodetoget = nthNode(&head,3);
    printf("\nData at node: %d",nodetoget->data);
    // struct node *temp = head->next;
    // printf("\n data: %d",temp->data);
    return 0;
}