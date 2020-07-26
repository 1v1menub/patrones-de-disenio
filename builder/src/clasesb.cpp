//
// Created by CABRIGI on 7/25/2020.
//

#include "clasesb.h"

llantas::llantas(int ide) {
    if(ide == 0) {
        tipo = "Urbanas";
    }
    else if(ide == 1) {
        tipo = "De carrera";
    }
    else {
        tipo = "De montania";
    }
}

llantas::llantas() {

}

motor::motor(int ide) {
    if(ide == 0) {
        tipo = "Basico";
    }
    else if(ide == 1) {
        tipo = "Potente";
    }
    else {
        tipo = "4x4";
    }
}

motor::motor() {

}

chasis::chasis(int ide) {
    if(ide == 0) {
        tipo = "Basico";
    }
    else if(ide == 1) {
        tipo = "Deportivo";
    }
    else {
        tipo = "Grueso y elevado";
    }
}

chasis::chasis() {

}

vehiculo::vehiculo(llantas l, motor m, chasis c) {
    _llantas = l;
    _motor = m;
    _chasis = c;
}

void vehiculo::imprimir() {
    cout << "Llantas: " << _llantas.tipo << endl;
    cout << "Motor: " << _motor.tipo << endl;
    cout << "Chasis: " << _chasis.tipo << endl;
}

carro::carro(llantas l1, motor m1, chasis c1) : vehiculo(l1, m1, c1) {
}

void carro::imprimir() {
    cout << "Este carro tiene: " << endl;
    vehiculo::imprimir();
}

moto::moto(llantas l2, motor m2, chasis c2) : vehiculo(l2, m2, c2) {
}

void moto::imprimir() {
    cout << "Esta moto tiene: " << endl;
    vehiculo::imprimir();
}


