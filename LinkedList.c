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
    Node *no = (Node*)malloc(sizeof(Node));
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

void* dequeue(LinkedList *list){
    log_info("Removendo o primeiro dado da fila");
	log_trace("dequeue ->");
	if (isEmpty(list)) {
		log_warn("Não há elementos na fila para serem removidos");
		return NULL;
	} else {
		log_debug("list->first: %p", list->first);
		Node *aux = list->first;
		void *data = aux->data;
		list->first = list->first->next;
		list->size -= 1;
		free(aux);
		log_info("Dado removido com sucesso!");
		log_debug("Nó removido: %p", aux);		
		log_debug("data returned: %p", data);
		log_trace("dequeue <-");
		return data;
	}
}

void* first(LinkedList *list){
    log_info("Buscando o primeiro elemento da lista");
	log_trace("first ->");
	if (isEmpty(list)){
		log_warn("Lista encontra-se vazia!");
		log_trace("first <-");
		return NULL;
	} else {
		log_debug("first: %p", list->first);
		log_trace("first <-");
		return list->first;
	}
}

void* last(LinkedList *list){
    log_info("Buscando o último elemento da lista");
	log_trace("last ->");
	if (isEmpty(list)){
		log_warn("Lista encontra-se vazia!");
		log_trace("last <-");
		return NULL;
	} else {
		Node *aux = list->first;
		while (aux->next != NULL) {
			log_debug("(aux,next): (%p, %p)");
			aux = aux->next;
		}
		log_trace("last <-");
		return aux->data;
	}
}

int push(LinkedList *list, void *data){

    log_info("Adicionando no topo da pilha");
	log_trace("push ->");
	Node *no = (Node*)malloc(sizeof(Node));
	if (no == NULL) {
		log_debug("no: %p", no);
		log_error("Memória insuficiente para a operação");
		log_trace("push <-");
		return 0;
	} else {
		no->data = data;
		no->next = list->first;
	}
	list->first = no;
	list->size += 1;
	log_info("Dado inserido com sucesso!");
	log_debug("no(data,next): %p(%p,%p)", no, no->data, no->next);
	log_trace("push <-");
	
	return 1;	
}

void* pop(LinkedList *list){
    log_info("Removendo o topo da pilha");
	log_trace("pop ->");
	Node *data = dequeue(list);
	log_trace("pop <-");
	return data;
}

void* top(LinkedList *list){
    log_info("Consultando o topo da pilha");
	log_trace("top ->");
	Node *data = first(list);
	log_trace("top <-");
	return data;
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

   log_info("Buscando posição do elemento");
    log_trace("indexOf ->");    
    if (isEmpty(list)) return -1;
    int count=0;
    Node *aux = list->first;
	log_debug("count, aux = %d, %p", count, aux);
    while(aux!=NULL && !equal(aux->data,data)) {
		log_debug("equal: %d", equal(aux->data, data));
        aux=aux->next;
        count++;
		log_debug("count, aux = %d, %p", count, aux);
    }
	log_debug("equal: %d", equal(aux->data, data));
	if (aux == NULL) {
		log_info("Elemento não foi localizado!");
	}
    log_trace("indexOf <-");    
    return (aux==NULL)?-1:count;
}


void* getPos(LinkedList *list, int pos){
	log_info("Determinando a posiçao");
	log_trace("getPos->");
	Node *aux = getNodeByPos(list,pos);
  if (aux==NULL)
    return NULL;
  else
  log_trace("getPos <-");
  log_info("Retornando dado da posição");  
	return aux->data;
  
}

Node* getNodeByPos(LinkedList *list, int pos){
	log_info("Determinando endereço do nó em uma posição da lista");
	log_trace("getNodeByPos->");
	if(isEmpty(list) || pos>=list->size) 
	log_warn("Posição nao encontrada");
	return NULL;
	
	Node *aux = list->first;
	
	for(int count =0;(aux!= NULL && count<pos); count++,aux=aux->next);
	log_trace("getNodeByPos <-");
	
	return aux;

}

int add(LinkedList *list, int pos, void *data){
	log_info("Adicionando um dado a lista");
	log_trace("add ->");
	log_info("Verificando se o posição inserida é o inicio");
	if(pos <=0) 
	return push(list,data);
	log_info("Determinando o nó da posição anterior");
	Node *aux = getNodeByPos(list,pos);
    if(aux == NULL) 
	log_warn("Posicao invalida");
	return -2;
	log_info("Alocando memoria")
	Node *newNode =(Node*)malloc(sizeof(Node));
	if(newNode == NULL) 
	log_warn("Memoria insuficiente");
	return -1;

	newNode->data = data; 
	newNode-> next = NULL;
	newNode->next = aux->next;
	aux-> next = newNode;
	list->size ++;

	log_trace("add <-");
	log_info("Dado adicionado com sucesso");
	return 1;
}
int addAll(LinkedList *listDest, int pos, LinkedList *listSource){
	log_info("Adicionando lista a partir de uma posiçao");
	log_trace("addAll ->");
	if(listDest == NULL || isEmpty(listDest))
	log_warn("Não é possivel prosseguir");
	return -1;
	if(listSource == NULL || isEmpty(listSource))
	log_warn("Não é possivel prosseguir");
	return -2;
	
	Node *last == NULL;
	for(last = listSource->first; last->next != NULL; last = last->next);
	if(pos == 0 ){
		last-> next = listDe
	}
	return 0;
}

void* removePos(LinkedList *list, int pos){
    return NULL;
}

bool removeData(LinkedList *list, void *data, compare equal){

}

