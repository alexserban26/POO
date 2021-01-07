//
// Created by alexs on 07.01.2021.
//

#ifndef MAIN_CPP_MATERIE_BUILDER_H
#define MAIN_CPP_MATERIE_BUILDER_H

#include "materie_imp.h"


class materie_builder {

    materie_imp m;
public:
    materie_builder() = default;

    materie_builder &nume(std::string num) {
        m.nume = std::move(num);
        return *this;
    }

    materie_builder &note(std::vector<int> n) {
        m.note = std::move(n);
        return *this;
    }

    materie_builder &nota_teza(float n) {
        m.nota_teza = n;
        return *this;
    }

    materie_imp build() {
        if (m.nota_teza != 0 && m.note.size() < 3) {
            throw (m.note.size());
        }

        return m;
    }

};


#endif //MAIN_CPP_MATERIE_BUILDER_H
