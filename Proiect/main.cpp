#include <iostream>

class Elev {
    std::string nume, prenume;
    //std:: string CNP;
    int numar_clasa;
    char litera_clasa;

public:
    Elev();

    explicit Elev(std::string);

    Elev(std::string, std::string);

    Elev(std::string, std::string, int);

    Elev(std::string, std::string, int, char );

    Elev(Elev &);

    ~Elev();

    //void afisare_info_elev();


};

Elev::Elev() {
    std::cout << "Elevul: ";
    nume = "-";
    prenume = "-";
    numar_clasa = -1;
    litera_clasa = (char) '-';
    std::cout << nume << " " << prenume << " Clasa " << numar_clasa << " " << litera_clasa << "\n\n";
}

Elev::Elev(std::string nume) {
    std::cout << "Elevul: ";
    this->nume = nume;
    prenume = "-";
    numar_clasa = -1;
    litera_clasa = (char) '-';
    std::cout << this->nume << " " << prenume << " Clasa " << numar_clasa << " " << litera_clasa << "\n\n";
}

Elev::Elev(std::string nume, std::string prenume) {
    std::cout << "Elevul: ";
    this->nume = nume;
    this->prenume = prenume;
    numar_clasa = -1;
    litera_clasa = (char) '-';
    std::cout << this->nume << " " << this->prenume << " Clasa " << numar_clasa << " " << litera_clasa << "\n\n";
}

Elev::Elev(std::string nume, std::string prenume, int numar_clasa) {
    std::cout << "Elevul: ";
    this->nume = nume;
    this->prenume = prenume;
    this->numar_clasa = numar_clasa;
    litera_clasa = '-';
    std::cout << this->nume << " " << this->prenume << " Clasa " << this->numar_clasa << " " << litera_clasa << "\n\n";
}

Elev::Elev(std::string nume, std::string prenume, int numar_clasa, char litera_clasa) {
    std::cout << "Elevul: ";
    this->nume = nume;
    this->prenume = prenume;
    this->numar_clasa = numar_clasa;
    this->litera_clasa = litera_clasa;
    std::cout << this->nume << " " << this->prenume << " Clasa " << this->numar_clasa << " " << this->litera_clasa
              << "\n\n";
}

Elev::Elev(Elev &elev) {
    std::cout << "Functie de copiere: \n";
    nume = elev.nume;
    prenume = elev.prenume;
    numar_clasa = elev.numar_clasa;
    litera_clasa = elev.litera_clasa;

    std::cout << this->nume << " " << this->prenume << " Clasa " << this->numar_clasa << " " << this->litera_clasa
              << "\n\n";
}

Elev::~Elev() {
    std::cout << "Datele elevului au fost afisate." << "\n\n\n";
}
//
//class Materie{
//    class info{
//        int note[10];
//    };
//};

int main() {

    Elev elev_liber;
    Elev elev_chelu("Chelu");
    Elev elev_ion("Ion", "Alex");
    Elev elev_popescu("Popescu", "Andreea", 10);
    Elev elev_andrei("Andrei", "Vasile", 12, 'B');
    Elev elev_copie(elev_andrei);
    Elev copie(elev_liber);


    return 0;
}
