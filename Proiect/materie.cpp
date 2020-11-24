//
// Created by alexs on 15.11.2020.
//

#include "materie.h"

float medie(const materie &m) {
    float s = 0;
    for (int i = 0; i < m.note.size(); ++i) {
        s += m.note[i];
    }
    return s / m.note.size();
}

std::istream &operator>>(std::istream &in, materie &m) {
    int nr_note, nota;
    in >> m.nume;
    in >> nr_note;
    for (int j = 0; j < nr_note; ++j) {
        in >> nota;
        m.note.push_back(nota);
    }
    return in;
}

std::ostream &operator<<(std::ostream &out, materie &m) {
    out << m.nume << ":\n";
    for (int j = 0; j < m.note.size(); ++j) {
        out << m.note[j] << ' ';
    }
    out << std::endl;
    out << "Media:" << medie(m) << std::endl;
    return out;
}

materie operator+(materie &m) {
    int nota;
    std::cout << "Introduceti nota:";
    std::cin >> nota;
    m.note.push_back(nota);
    return m;
}


