//
// Created by CABRIGI on 7/22/2020.
//

#include "usuario.h"

usuario::usuario(string _nombre) {
    nombre = _nombre;
}

void usuario::set_id(int _id) {
    id = _id;
}

void usuario::confirmar_registro() {
    cout << "Se ha registrado el usuario " << id << " con nombre " << nombre << endl;
}

void usuario::update() {
    cout << endl;
    cout << "ID: "<< id << endl << "Nombre: " << nombre << endl;
    cout << "ALERTA: El huracan ha llegado  a su fuerza maxima (100 km/h)" << endl;
}
