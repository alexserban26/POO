//
// Created by alexs on 15.11.2020.
//
#include <iostream>
#include "Elev.h"
//#include "materie.h"
//#include "situatie_scolara.h"


//Elev::Elev(const situatie_scolara& note, std::string nume, std::string prenume, int numar_clasa, char litera_clasa) {
//    std::cout << "Elevul: ";
//
//    this->nume = move(nume);
//    this->prenume = move(prenume);
//    this->numar_clasa = numar_clasa;
//    this->litera_clasa = litera_clasa;
//    this->note = note;
//
//}

//Elev::Elev(Elev &elev) {
//    std::cout << "Functie de copiere: \n";
//    nume = elev.nume;
//    prenume = elev.prenume;
//    numar_clasa = elev.numar_clasa;
//    litera_clasa = elev.litera_clasa;
//    note = elev.note;
//
//
//
//}

std::istream& operator>>(std::istream &in, Elev& e){
    in>>e.nume>>e.prenume>>e.numar_clasa>>e.litera_clasa>>e.note;
    return in;
}

std::ostream& operator<<(std::ostream& out, Elev& e){
    out<<e.nume<<' '<<e.prenume<<' '<<e.numar_clasa<<' '<<e.litera_clasa<<":\n"<<e.note<<std::endl;
    return out;
}

Elev::~Elev() {
    std::cout << "Datele elevului au fost afisate, spatiul a fost eliberat." << "\n";
}

