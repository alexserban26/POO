#include <iostream>
#include <fstream>
//#include <utility>
//#include <vector>
#include "materie.h"
#include "situatie_scolara.h"
#include "Elev.h"

using namespace std;


int main() {
    situatie_scolara note;
    Elev andrei, alex;

    ifstream f("date_elev.in");
    ofstream g("date_elev.out");
    if (f.is_open()&&g.is_open()) {
        f>>andrei;
        f>>alex;
        cout<<andrei<<endl<<alex;

    }
    else cout<<"Fisierul nu a putut fi deschis"<<endl;
    f.close();
    return 0;
}
