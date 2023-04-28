void show(DoublyLinkedList *list, printNode print) {
    Node* aux = list->first->next;
    while(aux!= list->first)
        print(aux->data);
        aux = aux->next
}

void showMem(DoublyLinkedList *list) {
    printf("Trash Node: %p\n\n",list->first);
    Node *aux = list->first->next;
    printf("Node Addr : Previous - Data - Next\n\n");
    while (aux!=list->first) {
        printf("%p: %p - %p - %p\n",aux, aux->previous, aux->data, aux->next);
        aux=aux->next;
    }
}

void init(DoublyLinkedList *list) {
    Node *trashNode = (Node*)malloc(sizeof(Node));
    trashNode->data=NULL;
    trashNode->previous=trashNode;
    trashNode->next=trashNode;
    list->first=trashNode;
    list->size=0;
}

int enqueue(DoublyLinkedList *list, void *data) {
    Node* newNode = (Node*)malloc(sizeof(Node))
    if(newNode == NULL) return -1
    newNode->data = data;
    newNode->next = list->first
    list->first->previous->next = newNode;
    list->first->previous = newNode;
    list->size++;
    return 1;
}

void show(DoublyLinkedList *list, printNode print){
    Node* aux = list->first->next;
    while(aux != list->first){
        print(aux->data);
        aux = aux->next;
    }


}