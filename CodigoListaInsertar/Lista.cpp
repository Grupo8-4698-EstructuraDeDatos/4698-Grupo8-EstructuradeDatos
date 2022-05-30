#include <iostream>
#include "Lista.h"

ListaEnlazada::ListaEnlazada(){

}

bool ListaEnlazada::estaVacio(){
    return this -> primero == nullptr;
}

Nodo* ListaEnlazada::obtenerPrevio(Nodo* nd){
    Nodo *actual = primero;
        while (actual != nullptr){
            if (actual -> getNodo() == nd) return actual;
            actual = actual->getNodo();
        }
    return nullptr;       
}

//!1
void ListaEnlazada::agregarFinal(int nuevo){
    Nodo *n = new Nodo(nuevo);

    if(estaVacio())
        primero = ultimo = n;
    else{
        ultimo -> setNodo(n);
        ultimo = n;
    }

    longitud++;
}

//!2
void ListaEnlazada::agregarInicio(int nuevo){
    Nodo *n = new Nodo(nuevo);

    if(estaVacio())
        primero = ultimo = n;
    else{
        n -> setNodo(primero);
        primero = n;
    }

    longitud++;
}

//!3
void ListaEnlazada::eliminarCabeza(){

    if(estaVacio()){ //Caso lista vacia
        throw std::invalid_argument("Lista vacia");

    }else if (primero == ultimo) { //Caso unico elemento
        primero = ultimo = nullptr;

    }else{ //Caso estandar
        Nodo *segundo = primero ->getNodo();
    
        primero = nullptr; //Elimino referencia
        primero = segundo;
    }

    longitud--;
}

//!4 
void ListaEnlazada::eliminarCola(){
    if(estaVacio()){ //Caso lista vacia
        throw std::invalid_argument("Lista vacia");

    }else if (primero == ultimo) { //Caso unico elemento
        primero = ultimo = nullptr;

    }else{
        Nodo *previo = obtenerPrevio(ultimo); 
        ultimo = previo;
        ultimo -> setNodo(nullptr);   
    }

    longitud--;
}

//!5
int ListaEnlazada::buscarPrimerNodo(){

    if (estaVacio()){
        cout << "Su lista esta vacia" <<endl;
        return 0;
    }else{
    return primero -> getValor();
    }
}

//!6
void ListaEnlazada::imprimirCabeza(){
    Nodo *nimpreso;
    nimpreso = primero;

    while( nimpreso != nullptr){
        cout<< nimpreso -> getValor() << " ";
        nimpreso = nimpreso->getNodo();
    }
}

//!7
void ListaEnlazada::imprimirCola(){
    Nodo *nimpreso;
    nimpreso = ultimo;
    cout << ultimo -> getValor() << " ";

    while(obtenerPrevio(nimpreso) != nullptr){
        nimpreso = obtenerPrevio(nimpreso);
        cout << nimpreso ->getValor() << " ";
    }
}

//?Funciones extra

int ListaEnlazada::buscarIndice(int buscado){

    if(estaVacio()){
        cout << "Lista vacia" <<endl;
    }else{
        int indice = 0; 
        Nodo *actual = primero;

        while(actual != nullptr){
            if(actual->getValor() == buscado) return indice;
                actual = actual->getNodo();
                indice++;
            }
    }

    return -1;
}

bool ListaEnlazada::contiene(int contenido){
    return buscarIndice(contenido) != -1;
}   

int ListaEnlazada::longitudLista(){
    return longitud;
}

int* ListaEnlazada::convertiraArray(){
    int *array = new int[longitud];

}