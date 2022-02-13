//
// Created by stefa on 1/16/2022.
//

#include "Cai.h"
using namespace  std;

Cai::Cai():numeAnimal("Cai"),cantitateGraunte(0),cantitateIarba(0),nrCapete(0),cantitateNutret(0) {}

Cai::~Cai() {}

Cai::Cai(int cantitateNutret, int nrCapete):numeAnimal("Cai"),cantitateGraunte(0),cantitateIarba(0),nrCapete(nrCapete),cantitateNutret(cantitateNutret) {}

int Cai::getConsum() {
    return (cantitateGraunte+cantitateNutret+cantitateIarba);
}

int Cai::getNumarAnimale() {
    return nrCapete;
}

int Cai::getCantitateNutret() {
    return cantitateNutret;
}

int Cai::getCantitateIarba() {
    return cantitateIarba;
}

int Cai::getCantitateGraunte() {
    return cantitateGraunte;
}

void Cai::afisare() {
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

void Cai::afisareAnimal() {
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
