//
// Created by stefa on 1/16/2022.
//

#include "Vaci.h"
using namespace std;

Vaci::Vaci():numeAnimal("Vaci"),cantitateGraunte(0),cantitateIarba(0),nrCapete(0),cantitateNutret(0) {}

Vaci::~Vaci() {;}

Vaci::Vaci(int cantitateNutret,int nrCapete):numeAnimal("Vaci"),cantitateGraunte(0),cantitateIarba(0),nrCapete(nrCapete),cantitateNutret(cantitateNutret)  {}

int Vaci::getConsum() {
    return (cantitateGraunte+cantitateNutret+cantitateIarba);
}

int Vaci::getNumarAnimale() {
    return nrCapete;
}

int Vaci::getCantitateNutret() {
    return cantitateNutret;
}

int Vaci::getCantitateIarba() {
    return cantitateIarba;
}

int Vaci::getCantitateGraunte() {
    return cantitateGraunte;
}

void Vaci::afisare() {
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

void Vaci::afisareAnimal() {
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


