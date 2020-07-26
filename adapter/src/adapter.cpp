//
// Created by CABRIGI on 7/26/2020.
//

#include "adapter.h"

adapter::adapter() {
}

int adapter::string_to_int(string val) {
    int result = stoi(val);
    return result;
}

string adapter::int_to_string(int val) {
    string result = to_string(val);
    return result;
}
