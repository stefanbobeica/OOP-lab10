#include <iostream>
#include <cmath>
#include "Vaci.h"
#include "Gaini.h"
#include "Cai.h"
#include "Porci.h"
#include "Capre.h"
using namespace std;
int main() {
   Animal** animale;
   animale=new Animal*[5];
   animale[0]=new Vaci(30,10);
   animale[1]=new Gaini(5,100);
   animale[2]=new Cai(8,2);
   animale[3]=new Porci(4,5,8);
   animale[4]=new Capre(4,4);

   int cantitate_zilnica=0;
   for(int i=0;i<5;i++)
       cantitate_zilnica=cantitate_zilnica+animale[i]->getConsum();
   float nrzile;
   nrzile=(float)2000/cantitate_zilnica;
   int aux;
   aux=floor(nrzile);
   float reumpleri;
   reumpleri=(float)365/nrzile;
   reumpleri= ceil(reumpleri);
   int nutret_zilnic=0;
   int graunte_zilnic=0;
   int iarba_zilnic=0;
   for(int i=0;i<5;i++)
   {
       nutret_zilnic+=animale[i]->getCantitateNutret();
       graunte_zilnic+=animale[i]->getCantitateGraunte();
       iarba_zilnic+=animale[i]->getCantitateIarba();
   }
   cout<<"In depozit trebuie stocate pentru a ajunge cat mai mult timp:"<<endl;
   cout<<"-"<<nutret_zilnic*aux<<"kg de nutret"<<endl;
   cout<<"-"<<graunte_zilnic*aux<<"kg de graunte"<<endl;
   cout<<"-"<<iarba_zilnic*aux<<"kg de iarba"<<endl;
   cout<<endl;
   cout<<"Depozitul trebuie reumplut de "<<reumpleri<<" ori."<<endl;
   cout<<endl;
   cout<<"Mancare ramasa in total la finalul anului: "<<reumpleri*floor(nrzile)*cantitate_zilnica-365*cantitate_zilnica<<"kg."<<endl;
   cout<<"Mancare ramasa pe categorii la  finalul anului:"<<endl;
   cout<<"Nutret: "<<reumpleri*floor(nrzile)*nutret_zilnic-365*nutret_zilnic<<"kg."<<endl;
   cout<<"Graunte: "<<reumpleri*floor(nrzile)*graunte_zilnic-365*graunte_zilnic<<"kg."<<endl;
   cout<<"Iarba: "<<reumpleri*floor(nrzile)*iarba_zilnic-365*iarba_zilnic<<"kg."<<endl<<endl;
   cout<<"Mancare consumata zilnic: "<<cantitate_zilnica<<"kg."<<endl;
   cout<<"Mancare consumata zilnic pe categorii:"<<endl;
   cout<<"Nutret: "<<nutret_zilnic<<"kg."<<endl;
   cout<<"Graunte: "<<graunte_zilnic<<"kg."<<endl;
   cout<<"Iarba: "<<iarba_zilnic<<"kg."<<endl<<endl;

    for(int i=0;i<4;i++)
        for(int j=i+1;j<5;j++){
            if(animale[i]->getConsum()<animale[j]->getConsum())
                swap(animale[i],animale[j]);
        }
    cout<<"Top 3 consumatori:"<<endl;
        for(int i=0;i<3;i++)
            animale[i]->afisare();
    cout<<"Detalii despre fiecare animal:"<<endl;
          for(int i=0;i<5;i++)
              animale[i]->afisareAnimal();
   return 0;
}
