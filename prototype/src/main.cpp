//
// Created by CABRIGI on 7/26/2020.
//

#include "mob.h"

int main() {
    mob ogro("Ogro");
    vector<mob> ejercito;
    for(int i = 0; i < 10; i++) {
        ejercito.push_back(ogro.clone());
    }
    for(int i = 0; i < 10; i++) {
        ejercito[i].imprimir_tipo();
    }
}