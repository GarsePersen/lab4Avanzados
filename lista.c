#include <stdlib.h>
#include <stdio.h>
#include "lista.h"



/* Función que imprime la lista
 * Entrada: Estructura Lista
 * */
void imprimirLista(struct Lista *l){
    struct NodoLista *aux = NULL;
    lista_for_all(l, aux) {
		printf("%i-", aux->numero);
    };
    printf("%i", l->tamanio);
}


/* Función que agrega un elementos a la lista
 * Entrada: Estructura Lista, char nombreNodo, char nombreNodoDestino, entero
 * */
void agregarElemento(struct Lista *l, int elemento){
    struct NodoLista *prev = l->nodos;
    l->tamanio++;
    //Se verifica si ya existe un nodo en la lista
    if(prev == NULL){
        l->nodos = malloc(sizeof(struct NodoLista));
        l->nodos->numero = elemento;
        l->nodos->siguiente = NULL;
        return;
    }
    struct NodoLista *ptr = prev;
    while(ptr){
        prev = ptr;
        ptr = ptr->siguiente;
    }
    struct NodoLista *nuevo = malloc(sizeof(struct NodoLista));
    nuevo->numero = elemento;
    nuevo->siguiente = NULL;
    prev->siguiente = nuevo;
}

/*Función que crea una lista
 * Entrada: Vacío
 * Salida: Estructura Lista 
 * */
struct Lista *crearLista(){
	struct Lista *l = malloc(sizeof(struct Lista));
	l->nodos = NULL;
    l->tamanio = 0;
	return l;
}


void eliminarListaInt(struct Lista *l){
    struct NodoLista *aux = NULL;
    lista_for_all(l, aux) {
	    free(aux);
    };
    free(l);
}


