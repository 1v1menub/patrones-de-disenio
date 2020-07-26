//
// Created by CABRIGI on 7/26/2020.
//

#include "lib.h"

class mob {
private:
    string tipo_de_mob;
public:
    mob(string tdm);
    void imprimir_tipo();
    mob clone();
};

