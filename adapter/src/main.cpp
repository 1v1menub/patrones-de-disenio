//
// Created by CABRIGI on 7/26/2020.
//

#include "adapter.h"

int main() {
    adapter adapt;
    int vali = 30;
    cout << "Int: " << vali << endl;
    string vals = adapt.int_to_string(vali);
    cout << "String: " << vals << endl;
    vali = adapt.string_to_int(vals) * 10;
    cout << "Int: " << vali;
}
