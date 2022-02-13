//
// Created by stefa on 1/16/2022.
//

#ifndef LABORATOR10_VACI_H
#define LABORATOR10_VACI_H
#include "Animal.h"

class Vaci:public Animal {
private:
    const char* numeAnimal;
    const int cantitateGraunte;
    const int cantitateIarba;
    int nrCapete;
    int cantitateNutret;

public:
     Vaci();
     ~Vaci();
     Vaci(int,int);
     int getConsum();
     int getNumarAnimale();
     int getCantitateNutret();
     int getCantitateIarba();
     int getCantitateGraunte();
     void afisare();
     void afisareAnimal();
};


#endif //LABORATOR10_VACI_H
