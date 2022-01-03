#ifndef _ELEKTRONSKAPORUKASATEKSTOM_H_
#define _ELEKTRONSKAPORUKASATEKSTOM_H_

#include "elektronskaPoruka.h"

class ElektronskaPorukaSaTekstom : public ElektronskaPoruka {
    string tekst;

    void ispis(ostream &os) const override;

public:
    ElektronskaPorukaSaTekstom(Korisnik &posilj, Korisnik &prim, string nasl) : ElektronskaPoruka(posilj, prim, nasl) {}

    void setTekst(const string &tekst);

    void posaljiPoruku() override { stanje = ElektronskaPoruka::Stanja::POSLATA; }

    ElektronskaPorukaSaTekstom *kopija() const override { return new ElektronskaPorukaSaTekstom(*this); }

};


#endif
