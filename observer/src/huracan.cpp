//
// Created by CABRIGI on 7/22/2020.
//

#include "huracan.h"

huracan::huracan() {
    numero_de_usuarios = 0;
}

void huracan::registrar_usuario(usuario u) {
    numero_de_usuarios++;
    u.set_id(numero_de_usuarios);
    usuarios.push_back(u);
    u.confirmar_registro();
}

void huracan::set_viento(double _viento) {
    viento= _viento;
    cout << "Fuerza del viento: " << viento << " km/h" << endl;
    if(viento == 100) {
        enviar_alertas();
    }
}

void huracan::enviar_alertas() {
    for(int i = 0; i < usuarios.size(); i++) {
        usuarios[i].update();
    }
}
