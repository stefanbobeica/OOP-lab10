//
// Created by stefa on 1/16/2022.
//

#include "Capre.h"
using namespace std;

Capre::Capre():numeAnimal("Capre"),cantitateGraunte(0),cantitateIarba(0),nrCapete(0),cantitateNutret(0) {}

Capre::~Capre() {}

Capre::Capre(int cantitateNutret, int nrCapete):numeAnimal("Capre"),cantitateGraunte(0),cantitateIarba(0),nrCapete(nrCapete),cantitateNutret(cantitateNutret) {}

int Capre::getConsum() {
    return (cantitateGraunte+cantitateNutret+cantitateIarba);
}

int Capre::getNumarAnimale() {
    return nrCapete;
}

int Capre::getCantitateNutret() {
    return cantitateNutret;
}

int Capre::getCantitateIarba() {
    return cantitateIarba;
}

int Capre::getCantitateGraunte() {
    return cantitateGraunte;
}

void Capre::afisare() {
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

void Capre::afisareAnimal() {
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
