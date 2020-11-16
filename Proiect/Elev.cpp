//
// Created by alexs on 15.11.2020.
//
#include <iostream>
#include "Elev.h"


Elev::Elev(const situatie_scolara& note, std::string nume, std::string prenume, int numar_clasa, char litera_clasa) {
    std::cout << "Elevul: ";

    this->nume = move(nume);
    this->prenume = move(prenume);
    this->numar_clasa = numar_clasa;
    this->litera_clasa = litera_clasa;
    this->note = note;

    afisare_info_elev();
}

Elev::Elev(Elev &elev) {
    std::cout << "Functie de copiere: \n";
    nume = elev.nume;
    prenume = elev.prenume;
    numar_clasa = elev.numar_clasa;
    litera_clasa = elev.litera_clasa;
    note = elev.note;

    afisare_info_elev();

}

Elev::~Elev() {
    std::cout << "Datele elevului au fost afisate, spatiul a fost eliberat." << "\n";
}