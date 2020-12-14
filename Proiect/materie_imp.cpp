//
// Created by alexs on 01.12.2020.
//

#include "materie_imp.h"
//#include "materie.h"

float materie_imp::medie() {
    float s = 0;
    for (auto i : note) {
        s += i;
    }
    return ((s / note.size()) * 3 + nota_teza) / 4;
}

//std::istream &operator>>(std::istream &in, materie_imp &m) {
//    int nr_note, nota;
//    in >> m.nume;
//    in >> nr_note;
//    for (int j = 0; j < nr_note; ++j) {
//        in >> nota;
//        m.note.push_back(nota);
//    }
//    in >> m.nota_teza;
//    return in;
//}

std::ostream &operator<<(std::ostream &out, std::unique_ptr<materie_imp> &m) {
    out << m->nume << ":\n";
    for (int j : m->note) {
        out << j << ' ';
    }
        out << std::endl << "Nota la teza este: " << m->nota_teza;
        out << std::endl;
        out << "Media:" << m->medie() << std::endl;
    return out;
}

materie_imp operator+(materie_imp &m) {
    float nota, teza;
    std::cout << "Ce doriti sa introduceti?(0-nota;1-teza)";
    std::cin >> teza;
    std::cout << "Introduceti nota:";
    std::cin >> nota;
    if (teza == 0)
        m.note.push_back(nota);
    else m.nota_teza = nota;
    return m;
}

materie_imp::materie_imp(float notaTeza) : nota_teza(notaTeza) {}

std::unique_ptr<materie> materie_imp::copiere() {

    auto mi = std::make_unique<materie_imp>(nota_teza);
    mi->nume=nume;
    mi->note=note;
    return mi;
}

std::ostream &materie_imp::print(std::ostream & out) {
    materie::print(out);
    out<< "Nota la teza este: " << nota_teza;
    out << std::endl;
    return out;
}
