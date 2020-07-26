//
// Created by CABRIGI on 7/26/2020.
//

#include "mob.h"

mob::mob(string tdm) {
    tipo_de_mob = tdm;
}

void mob::imprimir_tipo() {
    cout << tipo_de_mob << endl;
}

mob mob::clone() {
    mob m2(tipo_de_mob);
    return m2;
}
