//
// Created by CABRIGI on 7/26/2020.
//

#include "chain_o_r.h"

chain_o_r::chain_o_r() {
}

void chain_o_r::verificar_ruedas(carro_por_armar c) {
    if(!c.ruedas) {
        c.ruedas = 1;
        cout << "Se le agregaron las ruedas al carro." << endl;
    }
}

void chain_o_r::verificar_ejes(carro_por_armar c) {
    if(!c.ejes) {
        c.ejes = 1;
        cout << "Se le agregaron los ejes al carro." << endl;
    }
}

void chain_o_r::verificar_motor(carro_por_armar c) {
    if(!c.motor) {
        c.motor = 1;
        cout << "Se le agrego el motor al carro." << endl;
    }
}

void chain_o_r::verificar_chasis(carro_por_armar c) {
    if(!c.chasis) {
        c.chasis = 1;
        cout << "Se le agrego el chasis al carro." << endl;
    }
}

void chain_o_r::verificar_pintura(carro_por_armar c) {
    if(!c.pintura) {
        c.pintura = 1;
        cout << "Se pinto el carro." << endl;
    }
}

void chain_o_r::verificar_todo(carro_por_armar c) {
    verificar_ruedas(c);
    verificar_ejes(c);
    verificar_motor(c);
    verificar_chasis(c);
    verificar_pintura(c);
    cout << "El carro esta terminado." << endl;
}
