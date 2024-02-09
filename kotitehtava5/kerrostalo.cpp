#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    eka = new katutaso(); //varataan dynaamisesti muisti heapista
    toka = new kerros();
    kolmas = new kerros();
    eka->maaritaAsunnot(); //kutsutaan metodia katutaso-oliosta
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

kerrostalo::~kerrostalo(){
    delete eka; //vapautetaan dynaamisesti varattu muisti
    delete toka;
    delete kolmas;
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double katutasonKulutus = eka.laskeKulutus(hinta);
    double kerrostenKulutus = toka.laskeKulutus(hinta) + kolmas.laskeKulutus(hinta);
    return katutasonKulutus+kerrostenKulutus;
}
