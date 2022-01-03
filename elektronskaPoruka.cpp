#include "elektronskaPoruka.h"

ElektronskaPoruka::ElektronskaPoruka(Korisnik &posilj, Korisnik &prim, string nasl) {
    posiljalac = &posilj;
    primalac = &prim;
    naslov = nasl;
    stanje = U_PRIPREMI;
}

Korisnik *ElektronskaPoruka::getPrimalac() const {
    return primalac;
}

Korisnik *ElektronskaPoruka::getPosiljalac() const {
    return posiljalac;
}

ElektronskaPoruka::Stanja ElektronskaPoruka::getStanje() const {
    return stanje;
}

const string &ElektronskaPoruka::getNaslov() const {
    return naslov;
}

void ElektronskaPoruka::ispis(ostream &os) const {
    os << "Naslov: " << naslov << '\n' << "Posaljilac: " << *posiljalac << "Primalac: " << *primalac << endl;
}

ostream &operator<<(ostream &os, const ElektronskaPoruka &ep) {
    ep.ispis(os);

    return os;
}
