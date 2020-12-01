//
// Created by alexs on 15.11.2020.
//

#include "situatie_scolara.h"

std::istream &operator>>(std::istream &in, situatie_scolara &s) {
    int nr_materii,teza;
    std::unique_ptr<materie> materie;
    in>>nr_materii;

    for (int i = 0; i < nr_materii; ++i) {
        in>>teza;
        if (teza!=0)
            materie=std::make_unique<materie_imp>(teza);
        else
            materie=std::make_unique<class materie>();
        in >> materie;
        s.materii.push_back(materie->copiere());
    }

    return in;
}


std::ostream &operator<<(std::ostream &out, situatie_scolara &s) {
    for (auto & i : s.materii) {
        out << i;
    }
    return out;
}

situatie_scolara &situatie_scolara::operator=(const situatie_scolara& s){
    for(auto &i:s.materii){
        materii.push_back(i->copiere());
    }
    return *this;
}