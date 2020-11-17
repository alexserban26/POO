//
// Created by alexs on 15.11.2020.
//

#include "situatie_scolara.h"

std::istream &operator>>(std::istream &in, situatie_scolara &s) {
    int ok=1;
    int i=0;
    materie m;
    while (ok!=0){
        in>>m;
        s.materii.push_back(m);
        i++;
        std::cout<<"Continuati sa introduceti materii? (1-Da;0-Nu)";
        in>>ok;
    }
    return in;
}


std::ostream &operator<<(std::ostream &out, situatie_scolara &s) {
    for (int i = 0; i < s.materii.size(); ++i) {
        out<<s.materii[i];
    }
    return out;
}
