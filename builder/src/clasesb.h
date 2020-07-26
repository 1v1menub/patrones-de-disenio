//
// Created by CABRIGI on 7/25/2020.
//

#ifndef PATRONES_DE_DISENIO_CLASESB_H
#define PATRONES_DE_DISENIO_CLASESB_H

#include "lib.h"

class llantas {
public:
    string tipo;
    llantas();
    llantas(int ide);
};

class motor {
public:
    string tipo;
    motor();
    motor(int ide);
};

class chasis {
public:
    string tipo;
    chasis();
    chasis(int ide);
};

class vehiculo {
private:
    llantas _llantas;
    motor _motor;
    chasis _chasis;
public:
    vehiculo(llantas l, motor m, chasis c);
    virtual void imprimir();
};

class carro : public vehiculo {
public:
    carro(llantas l1, motor m1, chasis c1);
    void imprimir() override;
};

class moto : public vehiculo {
public:
    moto(llantas l2, motor m2, chasis c2);
    void imprimir() override;
};


#endif //PATRONES_DE_DISENIO_CLASESB_H
