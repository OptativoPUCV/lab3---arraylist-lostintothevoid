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
  vector->data=(void*) malloc(vector->capacity*sizeof(void));
  vector->size=0;
    return vector;
}

void append(ArrayList * l, void * data){
  if(l->size==l->capacity){
    l->data=(void*) realloc(sizeof(void), l->capacity+2);
  }
  l->data[l->size]=data;
  l->size++;
}

void push(ArrayList * l, void * data, int i){

}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
