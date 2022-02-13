//
// Created by stefa on 1/16/2022.
//

#ifndef LABORATOR10_PORCI_H
#define LABORATOR10_PORCI_H
#include "Animal.h"

class Porci:public Animal {
private:
    const char* numeAnimal;
    const int cantitateNutret;
    int cantitateIarba;
    int nrCapete;
    int cantitateGraunte;
public:
    Porci();
    ~Porci();
    Porci(int,int,int);
    int getConsum();
    int getNumarAnimale();
    int getCantitateNutret();
    int getCantitateIarba();
    int getCantitateGraunte();
    void afisare();
    void afisareAnimal();
};


#endif //LABORATOR10_PORCI_H
