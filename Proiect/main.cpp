#include <iostream>
#include <fstream>
//#include <utility>
//#include <vector>
#include "materie.h"
#include "materie_imp.h"
#include "materie_builder.h"
#include "situatie_scolara.h"
#include "Elev.h"

using namespace std;


int main() {
    Elev andrei, fabi;
    materie_builder m1;
    materie_imp m2;


    ifstream f("date_elev.in");
    ofstream g("date_elev.out");
    if (f.is_open() && g.is_open()) {
        f >> andrei >> fabi;
        g << andrei << endl << endl << fabi;
    } else cout << "Fisierul nu a putut fi deschis" << endl;
    f.close();
    g.close();
    try {
        m2 = m1.nume("Matematica").nota_teza(8.33).build();
        cout << m2;
    }
    catch (std::exception &e) {
        std::cout << "Eroare:\n" << e.what() << "\n";
    }

    return 0;
}
