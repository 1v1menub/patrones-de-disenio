//
// Created by CABRIGI on 7/22/2020.
//


#include "lib.h"

class usuario {
private:
    int id;
    string nombre;
public:
    usuario(string _nombre);
    void set_id(int _id);
    void confirmar_registro();
    void update();
};

