//
// Created by stefa on 1/16/2022.
//

#ifndef LABORATOR10_ANIMAL_H
#define LABORATOR10_ANIMAL_H
#include <iostream>
#include <cstring>

class Animal {
public:
    virtual int getConsum()=0;
    virtual int getNumarAnimale()=0;
    virtual int getCantitateNutret()=0;
    virtual int getCantitateIarba()=0;
    virtual int getCantitateGraunte()=0;
    virtual void afisare()=0;
    virtual void afisareAnimal()=0;
    ~Animal();
};


#endif //LABORATOR10_ANIMAL_H
