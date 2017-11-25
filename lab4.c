#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"
#include "archivo.h"

int main(int argc, char const *argv[]){
	struct Lista *polimero = leerArchivo();
    

    struct Lista *prueba = crearLista();

    agregarElemento(prueba, 1);

    imprimirLista(prueba); 
    
    
    return 0;
}

