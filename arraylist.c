#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void) {
  ArrayList * vector= (ArrayList*) malloc(sizeof(ArrayList));
  if(vector==NULL) exit(EXIT_FAILURE);
  vector->capacity=2;
  vector->data= malloc(vector->capacity*sizeof(void));
  vector->size=0;
    return vector;
}

void append(ArrayList * l, void * data){
  if(l->size == l->capacity){
    l->data=realloc(l->data, sizeof(void)*l->capacity*2);
    l->capacity = l->capacity*2;
    l->data[l->size]=data;
    l->size++;
  }
  else{
    l->data[l->size]=data;
    l->size++;
  }
}

void push(ArrayList * l, void * data, int i){
  if(i>l->size) return;
  if(l->size == l->capacity){
    l->data=realloc(l->data, sizeof(void*)*l->capacity*2);
    l->capacity = l->capacity*2;
      
  }
  
  for(int j=l->size; j>i; j--){
    l->data[j]=l->data[j-1];
  }
  l->data[i]=data;
  l->size++;


}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
  if(i>=l->size) return NULL;
  if(i<0){
    for(int j=l->size; j>=l->size+i; j--){
      if(l->data[j]==l->data[l->size+i])
        return l->data[j];
    }
  }
  else{
    return l->data[i-1];
  } 
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
