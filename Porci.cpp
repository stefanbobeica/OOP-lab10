//
// Created by stefa on 1/16/2022.
//

#include "Porci.h"
using namespace  std;
Porci::Porci():numeAnimal("Porci"),cantitateGraunte(0),cantitateIarba(0),nrCapete(0),cantitateNutret(0) {}

Porci::~Porci() {}

Porci::Porci(int cantitateGraunte, int cantitateIarba, int nrCapete):numeAnimal("Porci"),cantitateGraunte(cantitateGraunte),cantitateIarba(cantitateIarba),nrCapete(nrCapete),cantitateNutret(0) {}

int Porci::getConsum() {
    return (cantitateGraunte+cantitateNutret+cantitateIarba);
}

int Porci::getNumarAnimale() {
    return nrCapete;
}

int Porci::getCantitateNutret() {
    return cantitateNutret;
}

int Porci::getCantitateIarba() {
    return cantitateIarba;
}

int Porci::getCantitateGraunte() {
    return cantitateGraunte;
}

void Porci::afisare() {
    cout<<"Nume animal: "<<numeAnimal<<endl;
    cout<<"Consum total: "<<getConsum()<<"kg."<<endl;
    cout<<"Mancare consumata:";
    if(cantitateGraunte!=0)
        cout<<" graunte "<<cantitateGraunte<<"kg ";
    if(cantitateNutret!=0)
        cout<<" nutret "<<cantitateNutret<<"kg ";
    if(cantitateIarba!=0)
        cout<<" iarba "<<cantitateIarba<<"kg ";
    cout<<endl<<endl;
}

void Porci::afisareAnimal() {
    cout<<"Nume animal: "<<numeAnimal<<endl;
    cout<<"Numar animale:"<<nrCapete<<endl;
    cout<<"Consum total animal: "<<(float)getConsum()/nrCapete<<"kg."<<endl;
    cout<<"Mancare consumata animal:";
    if(cantitateGraunte!=0)
        cout<<" graunte "<<(float)cantitateGraunte/nrCapete<<"kg ";
    if(cantitateNutret!=0)
        cout<<" nutret "<<(float)cantitateNutret/nrCapete<<"kg ";
    if(cantitateIarba!=0)
        cout<<" iarba "<<(float)cantitateIarba/nrCapete<<"kg ";
    cout<<endl<<endl;
}
