//
// Created by alexs on 01.12.2020.
//

#ifndef POO_MATERIE_IMP_H
#define POO_MATERIE_IMP_H

#include <memory>
#include "materie.h"


class materie_imp:public materie {

float nota_teza{};

public:
    explicit materie_imp(float notaTeza);
    std::unique_ptr<materie> copiere() override;
    float medie()override;
     std::ostream& print(std::ostream&) override;
    //friend std::istream& operator>>(std::istream& , materie_imp&);
    friend std::ostream& operator<<(std::ostream& , std::unique_ptr<materie_imp>&);
    friend materie_imp operator+(materie_imp&);
};


#endif //POO_MATERIE_IMP_H
