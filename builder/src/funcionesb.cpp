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
