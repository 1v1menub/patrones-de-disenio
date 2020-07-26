//
// Created by CABRIGI on 7/22/2020.
//

#include "huracan.h"

int main() {
    cout << endl;
    huracan rep;
    usuario u1("Ignacio");
    rep.registrar_usuario(u1);
    cout << endl;
    usuario u2("Pedro");
    rep.registrar_usuario(u2);
    cout << endl;
    rep.set_viento(10.5);
    rep.set_viento(52.7);
    rep.set_viento(100);

}