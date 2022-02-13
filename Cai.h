//
// Created by stefa on 1/16/2022.
//

#ifndef LABORATOR10_CAI_H
#define LABORATOR10_CAI_H
#include "Animal.h"

class Cai:public Animal {
private:
    const char* numeAnimal;
    int cantitateNutret;
    const int cantitateIarba;
    int nrCapete;
    const int cantitateGraunte;
public:
    Cai();
    ~Cai();
    Cai(int,int);
    int getConsum();
    int getNumarAnimale();
    int getCantitateNutret();
    int getCantitateIarba();
    int getCantitateGraunte();
    void afisare();
    void afisareAnimal();
};


#endif //LABORATOR10_CAI_H
