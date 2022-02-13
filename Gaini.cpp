//
// Created by stefa on 1/16/2022.
//

#include "Gaini.h"
using namespace std;

Gaini::Gaini():numeAnimal("Gaini"),cantitateGraunte(0),cantitateIarba(0),nrCapete(0),cantitateNutret(0) {}

Gaini::~Gaini() {;}

Gaini::Gaini(int cantitateGraunte, int nrCapete):numeAnimal("Gaini"),cantitateGraunte(cantitateGraunte),cantitateIarba(0),nrCapete(nrCapete),cantitateNutret(0) {}

int Gaini::getConsum() {
    return (cantitateGraunte+cantitateNutret+cantitateIarba);
}

int Gaini::getNumarAnimale() {
    return nrCapete;
}

int Gaini::getCantitateNutret() {
    return cantitateNutret;
}

int Gaini::getCantitateIarba() {
    return cantitateIarba;
}

int Gaini::getCantitateGraunte() {
    return cantitateGraunte;
}

void Gaini::afisare() {
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

void Gaini::afisareAnimal() {
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

