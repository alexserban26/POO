//
// Created by alexs on 15.11.2020.
//

#ifndef POO_MATERIE_H
#define POO_MATERIE_H
#include <iostream>
#include <vector>

class materie {


    std::vector<int> note;
    std::string nume;

public:
    friend float medie(materie&);
    friend std::istream& operator>>(std::istream& , materie&);
    friend std::ostream& operator<<(std::ostream& , materie&);
    friend materie operator+(materie&);

};



#endif //POO_MATERIE_H
