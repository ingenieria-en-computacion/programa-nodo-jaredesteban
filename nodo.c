#include "nodo.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

Nodo* CrearNodo(){
    Nodo* nuevo= (Nodo*)malloc(sizeof(Nodo));
    nuevo->sig =NULL;
    nuevo->dato =0;
    return nuevo;
}
bool BorrarNodo (Nodo *n){
    if(n->sig==NULL){
        free(n);
        return true;
    }
    return false;
}
Nodo* AsignarDato(Nodo *e, DATO a){
    if(e!=NULL){
        e->dato=a;
    }
    return e;
}
DATO ObtenerDato(Nodo *n){
    if(n==NULL){
        printf("No hay datos\n");
        return-1;
    }
    return n->dato;
}

Nodo* AsignarReferencia(Nodo *n, Nodo *e){
    if(n!=NULL){
        n->sig=e;
    }
    return n;
}
Nodo* ObtenerRef(Nodo *n){
    if(n!=NULL){
        return n-> sig;
    }
    return NULL;
}