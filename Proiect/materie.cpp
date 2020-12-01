//
// Created by alexs on 15.11.2020.
//

#include <memory>
#include "materie.h"

float materie::medie() {
    float s = 0;
    for (float i : note) {
        s += i;
    }
    return s / note.size();
}

std::ostream &materie::print(std::ostream &out) {
    out << nume << ":\n";
    for (int j : note) {
        out << j << ' ';
    }
    out << std::endl;
    out << "Media:" << medie()<<' ';
    if(medie()>=5) out<<"PROMOVAT";
    else out<<"CORIGENT";
    out<<std::endl;
    return out;
}

std::istream &operator>>(std::istream &in, std::unique_ptr<materie> &m) {
    int nr_note, nota;
    in >> m->nume;
    in >> nr_note;
    for (int j = 0; j < nr_note; ++j) {
        in >> nota;
        m->note.push_back(nota);
    }
    return in;
}

std::ostream &operator<<(std::ostream &out, std::unique_ptr<materie> &m) {
//    out << m->nume << ":\n";
//    for (int j : m->note) {
//        out << j << ' ';
//    }
//    out << std::endl;
//    out << "Media:" << m->medie()<<' ';
//    if(m->medie()>=5) out<<"PROMOVAT";
//    else out<<"CORIGENT";
//    out<<std::endl;
//    return out;
   return m->print(out);
}

materie operator+(materie &m) {
    int nota;
    std::cout << "Introduceti nota:";
    std::cin >> nota;
    m.note.push_back(nota);
    return m;
}

materie::~materie() = default;

std::unique_ptr<materie> materie::copiere() {
    auto m = std::make_unique<materie>();
    m->nume=nume;
    m->note=note;
    return m;}





