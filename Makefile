all: clean ponteiro ponteiro_duplo

ponteiro:
	@echo
	@echo ==========================
	@echo      PONTEIRO SIMPLES
	@echo ==========================
	@echo Compilando o programa ponteiros
	gcc ponteiro.c -o ponteiro
	@echo Tornando o arquivo executável
	chmod +x ponteiro
	@echo Executando o programa ponteiros
	@echo ======================================================
	@echo
	./ponteiro

ponteiro_duplo:
	@echo
	@echo ==========================
	@echo      PONTEIRO DUPLO
	@echo ==========================
	@echo Compilando o programa ponteiro duplo
	gcc ponteiro_duplo.c -o ponteiro_duplo
	@echo Tornando o arquivo executável
	chmod +x ponteiro_duplo
	@echo Executando o programa ponteiro duplo
	@echo ======================================================
	@echo
	./ponteiro_duplo

clean:
	@echo
	@echo ==========================
	@echo APAGANDO TODOS OS PROGRAMAS
	@echo ==========================
	@echo Removendo o programa ponteiro
	rm -f ponteiro
	@echo Removendo o programa ponteiro duplo
	rm -f ponteiro_duplo
	@echo Removendo o programa lista generalizada
	rm -f lista_Generalizada
	@echo Removendo o programa lista ligada
	rm -f lista_ligada
	@echo Removendo o programa lista ligada
	rm -f lista_duplamente_ligada
	@echo Removendo o programa hash
	rm -f hash 

lista_ligada:
	@echo
	@echo ==========================
	@echo      Lista Ligada
	@echo ==========================
	@echo Compilando o programa lista ligada
	gcc  log.c log.h LinkedListTest.c LinkedList.h LinkedList.c -o lista_ligada
	@echo Tornando o arquivo executável
	chmod +x lista_ligada
	@echo Executando o programa lista ligada
	@echo ======================================================
	@echo
	./lista_ligada

lista_duplamente_ligada:
	@echo
	@echo ==========================
	@echo      Lista Duplamente ligada
	@echo ==========================
	@echo Compilando o programa lista duplamente ligada
	gcc  log.c log.h DoublyLinkedListTest.c DoublyLinkedList.h DoublyLinkedList.c -o lista_duplamente_ligada
	@echo Tornando o arquivo executável
	chmod +x lista_duplamente_ligada
	@echo Executando o programa lista duplamente ligada
	@echo ======================================================
	@echo
	./lista_duplamente_ligada

lista_Generalizada:
	@echo
	@echo ==========================
	@echo      Lista Generalizada
	@echo ==========================
	@echo Compilando o programa lista Generalizada
	gcc  log.c log.h GeneralizedLinkedListTest.c GeneralizedLinkedList.h GeneralizedLinkedList.c -o lista_Generalizada
	@echo Tornando o arquivo executável
	chmod +x lista_Generalizada
	@echo Executando o programa lista Generalizada
	@echo ======================================================
	@echo
	./lista_Generalizada

hash:
	@echo
	@echo ==========================
	@echo      HASH
	@echo ==========================
	@echo Compilando o programa Hash
	gcc   DoublyLinkedList.c DoublyLinkedList.h Hash.c Hash.h HashTest.c -o hash
	@echo Tornando o arquivo executável
	chmod +x hash
	@echo Executando o programa hash
	@echo ======================================================
	@echo
	./hash

