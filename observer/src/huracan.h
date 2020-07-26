//
// Created by CABRIGI on 7/22/2020.
//

#include "usuario.h"

class huracan {
private:
    vector<usuario> usuarios;
    double viento;
    int numero_de_usuarios;
public:
    huracan();
    void registrar_usuario(usuario u);
    void set_viento(double _viento);
    void enviar_alertas();
};
