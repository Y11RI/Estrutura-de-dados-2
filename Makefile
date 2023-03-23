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
