#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "log.h"

void init(LinkedList *list){
    log_info("inicializando a lista");
    log_trace("init -> ");
    list-> first = NULL;
    list-> size = 0;
    log_debug("list->first: %p", list->first);
    log_debug("list->size: %d", list->size);
    log_trace("list<-");
}


int enqueue(LinkedList *list, void *data){
    log_info("Adicionando no final da fila");
    log_trace("enqueue->");
    Node no* = (Node*)malloc(sizeof(Node));
    if(no == NULL){
        log_debug("no: %p", no);
        log_error("memoria insuficiente para operaçao");
        return 0;
    }else{
        no-> data = data;
        no-> next = NULL;
    }

    if(isEmpty(list)){
        list ->first = no;
    }else{
        Node *aux = list->first
        log_debug("(aux, aux->next): (%p, %p)", aux, aux->next);
		while (aux->next != NULL) {
			aux = aux->next;
			log_debug("(aux, aux->next): (%p, %p)", aux, aux->next);
		}
		aux->next = no;
		log_debug("(aux, aux->next): (%p, %p)", aux, aux->next);		
	}
	list->size += 1;
	log_info("Dado inserido com sucesso!");
	log_debug("no(data,next): %p(%p,%p)", no, no->data, no->next);
	log_trace("enqueue <-");
	
	return 1;	
    }
    return 0;
}

void* dequeue(LinkedList *list){
    log_info("Removendo no inicio da fila");
    log_trace("dequeue ->");

    if(isEmpty(list)){
        log_info("Não há dados a serem removidos");
        return NULL;
    }else{
        Node *remove = list->first; 
        list->first = list-> next;
        void *data = remove->
    }
    
    list->size --;
    log_info("Dado removido com sucesso");

    log_trace("dequeue <-");
    return NULL;
}

void* first(LinkedList *list){
    return NULL;
}

void* last(LinkedList *list){
    return NULL;
}

int push(LinkedList *list, void *data){

    return 0;
}

void* pop(LinkedList *list){
    return NULL;
}

void* top(LinkedList *list){
    return NULL;
}

bool isEmpty(LinkedList *list){
    log_info("verificando se a lista esta vazia");
    log_trace("isEmpty ->");
    if(list == NULL){
        log_error("parametros invalido");
        log_debug("list: %p", list);
        return true;
    }

    log_debug("list-> first: %d",list->size);
    log_trace("isEmpty <-");
    if(list ->size == 0){
        return true;
    }else{
        return false;
    }
}
int indexOf(LinkedList *list, void *data, compare equal){

    return 0;
}


void* getPos(LinkedList *list, int pos){
    return NULL;
}
Node* getNodeByPos(LinkedList *list, int pos){

}

int add(LinkedList *list, int pos, void *data){

    return 0;
}
int addAll(LinkedList *listDest, int pos, LinkedList *listSource){

    return 0;
}

void* removePos(LinkedList *list, int pos){
    return NULL;
}

bool removeData(LinkedList *list, void *data, compare equal){

}

