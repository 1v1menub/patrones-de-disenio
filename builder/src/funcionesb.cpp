//
// Created by CABRIGI on 7/25/2020.
//

#include "funcionesb.h"

vehiculo builder1(llantas l, motor m, chasis c, int tv) {
    if(tv == 0) {
        return carro(l, m, c);
    }
    else {

        return moto(l, m, c);
    }
}

void Builder() {
    cout << endl;
    int ln = 1;
    int mn = 2;
    int cn = 3;
    auto carro1 = builder1(llantas(ln), motor(mn), chasis(cn), 1);
    cout << "Este carro tiene: " << endl;
    carro1.imprimir();
    cout << endl;
    ln = 3;
    mn = 1;
    cn = 2;
    cout << "Este carro tiene: " << endl;
    auto moto1 = builder1(llantas(ln), motor(mn), chasis(cn), 2);
    moto1.imprimir();
}
