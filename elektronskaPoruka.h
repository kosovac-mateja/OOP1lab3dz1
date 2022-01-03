#ifndef _elektronska_poruka_
#define _elektronska_poruka_

#include "korisnik.h"

class ElektronskaPoruka {
protected:
    enum Stanja {
        U_PRIPREMI, POSLATA, PRIMLJENA
    };

    Korisnik *primalac;

    Korisnik *posiljalac;

    Stanja stanje;

    string naslov;

    virtual void ispis(ostream &os) const;

public:
    ElektronskaPoruka(Korisnik &posilj, Korisnik &prim, string nasl);

    Korisnik *getPrimalac() const;

    Korisnik *getPosiljalac() const;

    Stanja getStanje() const;

    const string &getNaslov() const;

    virtual void posaljiPoruku() = 0;

    virtual ElektronskaPoruka *kopija() const = 0;

    friend ostream &operator<<(ostream &os, const ElektronskaPoruka &ep);
};


#endif
