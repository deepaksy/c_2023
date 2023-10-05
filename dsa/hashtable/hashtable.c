#include<stdio.h>
#include<stdlib.h>

typedef struct item{
	int data;
	int key;
}ty_item;

typedef struct hashTable{
	int count;
	int size;
	ty_item** array;
}ty_hashTable;

ty_item* newItem(int key, int data){
	ty_item* newitem = malloc(sizeof(ty_item));
	newitem->key=key;
	newitem->data=data;
	return newitem;
}

void deleteItem(ty_item* item){
	if(item!=NULL){
		free(item);
	}
}

ty_hashTable* newHashTable(int size){
	ty_hashTable* result = (ty_hashTable*) malloc(sizeof(ty_hashTable));
	result->count = 0;
	result->size = size;
	result->array = malloc(sizeof(ty_item*)*size);
	return result;
}

void deleteHashTable(ty_hashTable* table){
	if(table!=NULL){
		for(int i=0; i< table->size;i++){
			ty_item* item = table->array[i];
			if(item!=NULL)
				deleteItem(item);

		}
		free(table->array);
		free(table);
	}
}

int ht_hasItem(ty_hashTable* table, int index){

	return table->array[index]!=NULL;
}


void ht_display(ty_hashTable* table){
	for(int i=0;i<table->size;i++){
		if(ht_hasItem(table,i)){
				ty_item* item = table->array[i];
				printf("%d) (%d,%d)\n",i,item->key,item->data);
				}
				else{
				printf("%d) empty\n",i);
				}
				printf("\n");
	}
}

int ht_isFull(ty_hashTable* table){
	return table->count == table->size;
}

int hashCode(int key,int size){
	return key%size;
}

//insert
int ht_insert(ty_hashTable* table, int key, int data){
	int result = 0;
	if(ht_isFull(table)){
		printf("Hash table is full!");
	}
	else {
		ty_item* item = newItem(key,data);
		int index = hashCode(key,table->size);
		while(ht_hasItem(table,index))
			index = hashCode(index+1,table->size);
		table->array[index] = item;
		table->count++;
		
	}
	return result;
}

//search
int ht_search(ty_hashTable* table, int key){
	int result = -1;
	int index = hashCode(key,table->size);
	while(ht_hasItem(table,index)){
			if(table->array[index]->key == key){
				result = index;
				break;
				}
			index = hashCode(index+1,table->size);
	}
	return result;
}

ty_item* ht_remove(ty_hashTable* table, int key){
	ty_item* result = NULL;
	int index = ht_search(table,key);
	if(index!=-1){
		result = table->array[index];
		table->array[index] = NULL;
		table->count--;
		}
	return result;
}

int main(){
	// Create a new fresh hashtable
	ty_hashTable* table = newHashTable(10);
	ty_item* item = NULL;
	ht_display(table);
	ht_insert(table,10,97);
	ht_insert(table,20,2);
	ht_insert(table,30,4);
	ht_display(table);
	printf("Search item 20\n");
	int itemIdx = ht_search(table,20);
	if(itemIdx !=-1){
		item = table->array[itemIdx];
		printf("item: (%d, %d)\n",item->key,item->data);
	}
	else{
		printf("20 not found\n");
	}
	printf("Remove item 20\n");
	ht_remove(table,20);
	ht_display(table);

	deleteHashTable(table);
	printf("\nEnd...");
	return 0;
}
