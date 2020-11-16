//
// Created by alexs on 15.11.2020.
//

#ifndef POO_MATERIE_H
#define POO_MATERIE_H
#include <iostream>
#include <vector>

class materie {

protected:
    std::string nume;
    std::vector<int> note;

    public:

    friend std::istream& operator>>(std::istream& , materie&);
    friend std::ostream& operator>>(std::ostream& , materie&);


};



#endif //POO_MATERIE_H
