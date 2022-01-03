#ifndef _korisnik_h_
#define _korisnik_h_

#include <iostream>

using namespace std;

class Korisnik {
    string ime;

    string adresa;
public:
    Korisnik(string name, string email) : ime(name), adresa(email) {}

    Korisnik(const Korisnik &k) = delete;

    string getIme() const { return ime; }

    string getAdresa() const { return adresa; }

    friend ostream &operator<<(ostream &os, const Korisnik &k);
};


#endif
