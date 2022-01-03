#include "elektronskaPorukaSaTekstom.h"
#include "greske.h"

void ElektronskaPorukaSaTekstom::setTekst(const string &tekst) {
    if (stanje == ElektronskaPoruka::Stanja::POSLATA) throw GPoslataPoruka();
    ElektronskaPorukaSaTekstom::tekst = tekst;
}

void ElektronskaPorukaSaTekstom::ispis(ostream &os) const {
    ElektronskaPoruka::ispis(os);

    os << "Tekst poruke: " << tekst << endl;
}


