//
// Created by CABRIGI on 7/26/2020.
//

#include "chain_o_r.h"

int main() {
    chain_o_r cadena_responsabilidades;
    carro_por_armar c1(0,0,0,0,0);
    cout << "Carro 1:" << endl;
    cadena_responsabilidades.verificar_ruedas(c1);
    cout << endl;
    carro_por_armar c2(1,1,1,0,0);
    cout << "Carro 2:" << endl;
    cadena_responsabilidades.verificar_ruedas(c2);
    cout << endl;
    carro_por_armar c3(0,1,0,0,1);
    cout << "Carro 3:" << endl;
    cadena_responsabilidades.verificar_ruedas(c3);
    cout << endl;
}
