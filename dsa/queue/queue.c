#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct queue{
    int items[MAX];
    int front,rear;
};
struct queue queue;

void initialize(struct queue **list){
    (*list)->front=-1;
    (*list)->rear=-1;
}

void enqueue(struct queue **list,int item){
    if((*list)->front<0){
        printf("\n%d\n",(*list)->front);
        (*list)->front++;
        (*list)->rear++;
        (*list)->items[(*list)->rear] = item;
    }
    else{
        (*list)->rear++;
    (*list)->items[(*list)->rear] = item;
    }
}

void dequeue(struct queue **list){
    (*list)->items[(*list)->front] = 0;
    (*list)->front++;
}

void display(struct queue **list) {
  if ((*list)->rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nlist From index: %d \n",(*list)->front);
    printf("\nQueue elements are:\n");
    for (i = (*list)->front; i <= (*list)->rear; i++)
      printf("%d  ", (*list)->items[i]);
  }
  printf("\n");
}

int main(){
    struct queue *list;
    list = (struct queue*)malloc(sizeof(struct queue));
    initialize(&list);
    enqueue(&list,1);
    enqueue(&list,2);
    enqueue(&list,3);
    enqueue(&list,4);
    enqueue(&list,5);
    enqueue(&list,6);
    display(&list);
    dequeue(&list);
    display(&list);
    return 0;
}