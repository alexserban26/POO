//
// Created by alexs on 15.11.2020.
//

#include "situatie_scolara.h"

std::istream &operator>>(std::istream &in, situatie_scolara &s) {
    int nr_materii;
    in>>nr_materii;
    for (int i = 0; i < nr_materii; ++i) {
        materie m;
        in >> m;
        s.materii.push_back(m);
    }
    return in;
}


std::ostream &operator<<(std::ostream &out, situatie_scolara &s) {
    for (int i = 0; i < s.materii.size(); ++i) {
        out << s.materii[i];
    }
    return out;
}

