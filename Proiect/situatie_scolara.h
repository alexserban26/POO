//
// Created by alexs on 15.11.2020.
//

#ifndef POO_SITUATIE_SCOLARA_H
#define POO_SITUATIE_SCOLARA_H
#include <iostream>
#include <vector>
#include <memory>
#include "materie_imp.h"

class situatie_scolara{

    std::vector<std::unique_ptr<materie>> materii;

public:
    situatie_scolara& operator=(const situatie_scolara&);
    situatie_scolara()=default;
    friend std::istream& operator>>(std::istream& , situatie_scolara&);
    friend std::ostream& operator<<(std::ostream& , situatie_scolara&);
    ~situatie_scolara() {
        for (int i = 0; i < this->materii.size(); i++) {
            this->materii.pop_back();
        }
        std::cout << "Spatiul alocat pentru note a fost eliberat" << std::endl;
    }

};

#endif //POO_SITUATIE_SCOLARA_H
