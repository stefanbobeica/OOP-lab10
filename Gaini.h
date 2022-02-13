//
// Created by stefa on 1/16/2022.
//

#ifndef LABORATOR10_GAINI_H
#define LABORATOR10_GAINI_H
#include "Animal.h"

class Gaini:public Animal {
private:
    const char* numeAnimal;
    const int cantitateNutret;
    const int cantitateIarba;
    int nrCapete;
    int cantitateGraunte;
public:
    Gaini();
    ~Gaini();
    Gaini(int,int);
    int getConsum();
    int getNumarAnimale();
    int getCantitateNutret();
    int getCantitateIarba();
    int getCantitateGraunte();
    void afisare();
    void afisareAnimal();
};


#endif //LABORATOR10_GAINI_H
