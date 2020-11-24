//
// Created by alexs on 15.11.2020.
//

#ifndef POO_ELEV_H
#define POO_ELEV_H
#include <iostream>
#include "situatie_scolara.h"


class Elev {


    std::string nume, prenume;
    int numar_clasa;
    char litera_clasa;

    friend class situatie_scolara;

    situatie_scolara note;


public:

//    explicit Elev(const situatie_scolara& note, std::string nume = "-", std::string prenume = "-", int numar_clasa = -1,
//                  char litera_clasa = '-');
    Elev()=default;
    Elev(Elev &);
    ~Elev();
    friend std::istream& operator>>(std::istream &, Elev&);
    friend std::ostream& operator<<(std::ostream& , Elev&);



};


#endif //POO_ELEV_H
