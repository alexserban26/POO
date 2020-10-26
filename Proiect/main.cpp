#include <iostream>
#include <vector>
#include <utility>

class situatie_scolara{
    std::string materie;
    int nota;
    std::vector<std::pair<std::string,int>> materii;

public:

    void afisare_note(){
        std::cout<<"Materie: "<<materie<<' '<<"Nota: "<<nota<<"\n";
    }

    situatie_scolara(std::string materie="-", int nota = 0);
    situatie_scolara(situatie_scolara &);
    ~situatie_scolara();

};

situatie_scolara::situatie_scolara(std::string materie1, int nota1){
    this->materie=materie1;
    this->nota=nota1;
}

situatie_scolara::situatie_scolara(situatie_scolara &copie) {
    this->materie = copie.materie;
    this->nota = copie.nota;
}

situatie_scolara::~situatie_scolara() {
    std::cout<<"Spatiul a fost eliberat\n";
}

class Elev {


    std::string nume, prenume;
    int numar_clasa;
    char litera_clasa;
    friend class situatie_scolara;
    situatie_scolara note;


public:
    //Elev(std::string nume, std::string prenume, int numar_clasa, char litera_clasa, situatie_scolara note);
    Elev(situatie_scolara note,std::string nume = "-", std::string prenume = "-", int numar_clasa= -1, char litera_clasa = '-');

    Elev(Elev &);

    ~Elev();

    void afisare_info_elev(){
        std::cout << nume << " " << prenume << " Clasa " << numar_clasa << " " << litera_clasa<< "\n";
        note.afisare_note();
    }

};

Elev::Elev(situatie_scolara note,std::string nume , std::string prenume , int numar_clasa, char litera_clasa) {
    std::cout << "Elevul: ";
    this->nume = nume;
    this->prenume = prenume;
    this->numar_clasa = numar_clasa;
    this->litera_clasa = litera_clasa;
    this->note=note;
    afisare_info_elev();
}

Elev::Elev(Elev &elev) {
    std::cout << "Functie de copiere: \n";
    nume = elev.nume;
    prenume = elev.prenume;
    numar_clasa = elev.numar_clasa;
    litera_clasa = elev.litera_clasa;
    note=elev.note;

    afisare_info_elev();

}

Elev::~Elev() {
    std::cout << "Datele elevului au fost afisate, spatiul a fost eliberat." << "\n";
}


int main() {

    situatie_scolara nota_info("Informatica",5);
    Elev elev_andrei(nota_info,"Andrei", "Vasile", 12, 'B');
    Elev elev_copie(elev_andrei);



    return 0;
}
