#include<stdio.h>
#ifndef _NODO_
#define _NODO_
#include <stdbool.h>

//TAD

typedef int DATO;
typedef struct _Nodo Nodo;

typedef struct _Nodo{
    DATO dato;
    Nodo* sig;
} Nodo;

//Funciones 
Nodo* CrearNodo ();
bool BorrarNodo(Nodo*);
Nodo* AsignarDato (Nodo*, DATO);
DATO ObtenerDato (Nodo*);
Nodo* AsignarReferencia (Nodo*, Nodo*);
Nodo* ObtenerRef (Nodo*);

#endif