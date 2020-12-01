//
// Created by alexs on 15.11.2020.
//

#ifndef POO_MATERIE_H
#define POO_MATERIE_H
#include <iostream>
#include <vector>
#include <memory>


class materie{

protected:
    std::vector<int> note;
    std::string nume;

public:
    virtual ~materie();
    virtual float medie();
    virtual std::unique_ptr<materie> copiere();
    virtual std::ostream& print(std::ostream&);
    friend std::istream& operator>>(std::istream& , std::unique_ptr<materie>&);
    friend std::ostream& operator<<(std::ostream& , std::unique_ptr<materie>&);
    friend materie operator+( materie&);


};



#endif //POO_MATERIE_H
