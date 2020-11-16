#include <iostream>
//#include <utility>
#include <vector>
#include "situatie_scolara.h"
#include "Elev.h"

using namespace std;

//class situatie_scolara {
//    vector<pair<string, vector<int>>> materii;
//public:
//    situatie_scolara()=default;
//
//    explicit situatie_scolara(vector<pair<string, vector<int>>> materii1) {
//        for (int i = 0; i < materii1.size(); i++)
//            this->materii.push_back(materii1[i]);
//    }
//
//    void afisare_note() {
//        for (int i = 0; i < this->materii.size(); i++) {
//            cout << this->materii[i].first << ": " << '\n';
//            for (int j = 0; j < this->materii[i].second.size(); j++)
//                cout << this->materii[i].second[j] << ' ';
//            cout << endl;
//        }
//    }
//    void medie(){
//        int s=0;
//        for (int i = 0; i < this->materii.size(); i++) {
//            cout << "Media la " << this->materii[i].first << " este: ";
//            for (int j = 0; j < this->materii[i].second.size(); j++)
//                s += this->materii[i].second[j];
//            cout<< s/this->materii[i].second.size()<<' ';
//            if((s/this->materii[i].second.size())<5)
//                cout<<"CORIGENT"<<endl;
//            else cout<<"PROMOVAT"<<endl;
//            s=0;
//        }
//        cout<<endl;
//    }
//
//    ~situatie_scolara() {
//        for (int i = 0; i < this->materii.size(); i++) {
//            this->materii.pop_back();
//        }
//        cout << "Spatiul a fost eliberat" << endl;
//
//
//    }
//};
//
//class Elev {
//
//
//    string nume, prenume;
//    int numar_clasa;
//    char litera_clasa;
//
//    friend class situatie_scolara;
//
//    situatie_scolara note;
//
//
//public:
//
//    explicit Elev(const situatie_scolara& note, string nume = "-", string prenume = "-", int numar_clasa = -1,
//         char litera_clasa = '-');
//
//    Elev(Elev &);
//
//    ~Elev();
//
//    void afisare_info_elev() {
//        cout << nume << " " << prenume << " Clasa " << numar_clasa << " " << litera_clasa << "\n";
//        this->note.afisare_note();
//        this->note.medie();
//    }
//
//};
//
//Elev::Elev(const situatie_scolara& note, string nume, string prenume, int numar_clasa, char litera_clasa) {
//    cout << "Elevul: ";
//
//    this->nume = move(nume);
//    this->prenume = move(prenume);
//    this->numar_clasa = numar_clasa;
//    this->litera_clasa = litera_clasa;
//    this->note = note;
//
//    afisare_info_elev();
//}
//
//Elev::Elev(Elev &elev) {
//    cout << "Functie de copiere: \n";
//    nume = elev.nume;
//    prenume = elev.prenume;
//    numar_clasa = elev.numar_clasa;
//    litera_clasa = elev.litera_clasa;
//    note = elev.note;
//
//    afisare_info_elev();
//
//}
//
//Elev::~Elev() {
//    cout << "Datele elevului au fost afisate, spatiul a fost eliberat." << "\n";
//}


int main() {

    pair<string, vector<int>> temp1, temp2;
    vector<int> v1, v2;
    v1 = {1, 2, 3};
    v2 = {4, 5, 6};
    temp1 = make_pair("Informatica", v1);
    temp2 = make_pair("Matematica", v2);
    situatie_scolara note({temp1, temp2});
    Elev elev_andrei(note, "Andrei", "Vasile", 12, 'B');
    Elev elev_copie(elev_andrei);


    return 0;
}
