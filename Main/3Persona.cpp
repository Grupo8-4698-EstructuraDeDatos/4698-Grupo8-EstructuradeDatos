#pragma once
#include "3Persona.h"
#include <iostream>
#include <string>
using namespace std;

    Persona::Persona(string n, double p){
        this->nombre = n;
        this->presupuesto = p;
    }

    Persona::~Persona(){
        free(this);
    }

    void Persona::comprarCelular(Celular* celu){

        if(verificarCelular(celu)){
            if(disminuirPresupuesto()){
                if(this->presupuesto - celu->getPrecio() > 0 || celu->disminuirStock()){
                    this->presupuesto -= celu->getPrecio();
                    celu->aumentarCantidad(1);
                    this->comprados->insertarFinal(celu);
                }else{
                    celu->disminuirStock();                
                }    
            }else{
                cout<< "No posee el suficiente dinero para comprar esto" <<endl;   
            }
        }else{

            if(disminuirPresupuesto()){
                if(this->presupuesto - celu->getPrecio() > 0 || celu->disminuirStock()){
                    this->presupuesto -= celu->getPrecio();
                    NodoDC<Celular*> *it =comprados->obtenerUltimo();
                    int cont = 0;
                    while(cont < comprados->obtenerLongitud()){
                        if((it->getValor()) == celu){
                            (it->getValor())->aumentarCantidad(1);
                        }
                        it = it->getAnterior();
                        cont++;
                    }
                }else{
                    celu->disminuirStock();                
                }    
            }else{
                cout<< "No posee el suficiente dinero para comprar esto" <<endl;   
            }
        }    
    }
    
    void Persona::comprarCelular(Celular* celu, int cantidad){

        if(verificarCelular(celu)){
            if(disminuirPresupuesto()){
                if(this->presupuesto - celu->getPrecio()*cantidad > 0 || celu->disminuirStock(cantidad)){
                    this->presupuesto -= celu->getPrecio()*cantidad;
                    celu->aumentarCantidad(cantidad);
                    this->comprados->insertarFinal(celu);
                }else{
                    celu->disminuirStock(cantidad);                
                }    
            }else{
                cout<< "No posee el suficiente dinero para comprar esto" <<endl;   
            }
        }else{

                if(disminuirPresupuesto()){
                    if(this->presupuesto - celu->getPrecio()*cantidad > 0 || celu->disminuirStock(cantidad)){
                        this->presupuesto -= celu->getPrecio()*cantidad;
                        
                        NodoDC<Celular*> *it =comprados->obtenerUltimo();

                        int cont = 0;
                        while(cont < comprados->obtenerLongitud()){
                            if((it->getValor()) == celu){
                                (it->getValor())->aumentarCantidad(cantidad);
                            }
                            it = it->getAnterior();
                            cont++;
                        }


                    }else{
                        celu->disminuirStock(cantidad);                
                    }

                }else{
                    cout<< "No posee el suficiente dinero para comprar esto" <<endl;   
                }
        }    
    }

    
    bool Persona::verificarCelular(Celular* celu){
        NodoDC<Celular*> *it =comprados->obtenerUltimo();
        int cont = 0;
        while(cont < comprados->obtenerLongitud()){ 
            if((it->getValor()) == celu){
                return false;
            }
            cont++;
            it = it->getAnterior();
        }

        return true;
    }

    bool Persona::disminuirPresupuesto(){
        if(this->presupuesto > 0){
            return true;
        }
        else return false;
    }

    void Persona::verComprados(){

        if (comprados->estaVacio()) cout<< "Lista vacia. No existe nada imprimir"<<endl;
            else{
                    
                NodoDC<Celular*> *nimpreso;
                nimpreso = comprados->obtenerUltimo();

                while( nimpreso != comprados->obtenerPrimero()){

                    cout<< nimpreso -> toString()<< " y ha comprado "<< (nimpreso->getValor())->getCantidad() << " items de este tipo" <<endl;
                    nimpreso = nimpreso->getAnterior();
                
                }
                cout << (comprados->obtenerPrimero())->toString()<< " y ha comprado "<< ((comprados->obtenerPrimero())->getValor())->getCantidad() << " items de este tipo" <<endl;
            }
    }

    //Metodos
    //Gests
    string Persona::getNombre(){
        return nombre;

    }
    double Persona ::getPresupuesto(){
        return presupuesto;
    }

    ListaDobleC<Celular*>*  Persona ::getComprados(){
        return comprados;
    }

    //Setter
    void Persona ::setNombre(string _nombre){
        nombre = _nombre;

    }

    void Persona ::setPresupuesto(double _presupuesto){
        presupuesto = _presupuesto;

    }
    void Persona :: setComprados(ListaDobleC<Celular*>*list){
        comprados = list;

    }

    string Persona::toString(){
        string s =  this->getNombre() + ", tiene un presupuesto de " + to_string(this->getPresupuesto());
        return s;
    }

