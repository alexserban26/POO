//
// Created by alexs on 15.11.2020.
//

#ifndef POO_SITUATIE_SCOLARA_H
#define POO_SITUATIE_SCOLARA_H
#include <iostream>
#include <vector>

class situatie_scolara {
    std::vector<std::pair<std::string, std::vector<int>>> materii;
public:
    situatie_scolara()=default;

    explicit situatie_scolara(std::vector<std::pair<std::string, std::vector<int>>> materii1) {
        for (int i = 0; i < materii1.size(); i++)
            this->materii.push_back(materii1[i]);
    }

    void afisare_note() {
        for (int i = 0; i < this->materii.size(); i++) {
            std::cout << this->materii[i].first << ": " << '\n';
            for (int j = 0; j < this->materii[i].second.size(); j++)
                std::cout << this->materii[i].second[j] << ' ';
            std::cout << std::endl;
        }
    }
    void medie(){
        int s=0;
        for (int i = 0; i < this->materii.size(); i++) {
            std::cout << "Media la " << this->materii[i].first << " este: ";
            for (int j = 0; j < this->materii[i].second.size(); j++)
                s += this->materii[i].second[j];
            std::cout<< s/this->materii[i].second.size()<<' ';
            if((s/this->materii[i].second.size())<5)
                std::cout<<"CORIGENT"<<std::endl;
            else std::cout<<"PROMOVAT"<<std::endl;
            s=0;
        }
        std::cout<<std::endl;
    }

    ~situatie_scolara() {
        for (int i = 0; i < this->materii.size(); i++) {
            this->materii.pop_back();
        }
        std::cout << "Spatiul a fost eliberat" << std::endl;


    }
};

#endif //POO_SITUATIE_SCOLARA_H
