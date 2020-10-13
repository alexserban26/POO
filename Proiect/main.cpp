#include <iostream>

class Elev{
    std :: string nume, prenume;
    int numar_clasa;
    const char* litera_clasa;

public:
    Elev();
    explicit Elev(std::string);
    explicit Elev(std::string, std::string);
    explicit Elev(std::string, std::string, int);
    explicit Elev(std::string, std::string, int, const char*);
    Elev(Elev&);

    //void afisare_info_elev();


};

Elev::Elev(){
    std::cout<< "Elevul:";
    nume = "-";
    prenume = "-";
    numar_clasa=-1;
    litera_clasa= "-";
    std::cout<<nume<<" "<<prenume<<" Clasa "<<numar_clasa<<litera_clasa;
}

Elev::Elev(std::string nume){
    std::cout<< "Elevul:";
    this->nume = nume;
    prenume = "-";
    numar_clasa=-1;
    litera_clasa= "-";
    std::cout<<this->nume<<" "<<prenume<<" Clasa "<<numar_clasa<<litera_clasa;
}

Elev::Elev(std::string nume, std::string prenume){
    std::cout<< "Elevul:";
    this->nume = nume;
    this->prenume = prenume;
    numar_clasa=-1;
    litera_clasa= "-";
    std::cout<<this->nume<<" "<<this->prenume<<" Clasa "<<numar_clasa<<litera_clasa;
}

Elev::Elev(std::string nume, std::string prenume, int numar_clasa){
    std::cout<< "Elevul:";
    this->nume = nume;
    this->prenume = prenume;
    this->numar_clasa = numar_clasa;
    litera_clasa = "-";
    std::cout<<this->nume<<" "<<this->prenume<<" Clasa "<<this->numar_clasa<<litera_clasa;
}

Elev::Elev(std::string nume, std::string prenume, int numar_clasa, const char* litera_clasa){
    std::cout<< "Elevul:";
    this->nume = nume;
    this->prenume = prenume;
    this->numar_clasa = numar_clasa;
    this->litera_clasa = litera_clasa;
    std::cout<<this->nume<<" "<<this->prenume<<" Clasa "<<this->numar_clasa<<this->litera_clasa;
}

Elev::Elev(Elev &elev){
    std:: cout<<"Functie de copiere: \n";
    nume = elev.nume;
    prenume = elev.prenume;
    numar_clasa = elev.numar_clasa;
    litera_clasa = elev.litera_clasa;

    std::cout<<this->nume<<" "<<this->prenume<<" Clasa "<<numar_clasa<<litera_clasa;
}


int main() {
    Elev e("Andrei","Vasile",12,"B");
    return 0;
}
