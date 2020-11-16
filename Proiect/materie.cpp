//
// Created by alexs on 15.11.2020.
//

#include "materie.h"

std::istream& operator>>(std::istream& in , materie& m){
    in>>m.nume;
    int ok=1;
    int nota;
    while(ok==1){
        std::cout<<"Introduceti nota:";
        in>>nota;
        m.note.push_back(nota);
        std::cout<<"Continuati sa introduceti note? (1-Da;0-Nu)";
        in>>ok;
    }
    return in;
}

std::ostream& operator<<(std::ostream& out, materie& m){
    out<<m.nume<<":\n";
    for (int i = 0; i < m.note.size(); ++i) {
        out<<m.note[i]<<' ';
    }
    out<<std::endl;
    return out;
}

materie operator+(materie& m){
    int nota;
    std::cout<<"Introduceti nota:";
    std::cin>>nota;
    m.note.push_back(nota);
    return m;
}

float medie(materie& m){
    float s=0;
    for (int i = 0; i < m.note.size(); ++i) {
        s+=m.note[i];
    }
    return s/m.note.size();
}
