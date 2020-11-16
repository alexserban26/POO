//
// Created by alexs on 15.11.2020.
//

#ifndef POO_SITUATIE_SCOLARA_H
#define POO_SITUATIE_SCOLARA_H
#include <iostream>
#include <vector>
#include "materie.h"

class situatie_scolara : public materie{
    std::vector<materie>materii;

public:
    situatie_scolara()=default;

    ~situatie_scolara() {
        for (int i = 0; i < this->materii.size(); i++) {
            this->materii.pop_back();
        }
        std::cout << "Spatiul a fost eliberat" << std::endl;


    }
};

#endif //POO_SITUATIE_SCOLARA_H
