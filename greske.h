#ifndef _greske_h_
#define _greske_h_

#include <iostream>
#include <exception>

using namespace std;

class GNemaTek : public exception {
public:
    GNemaTek() : exception() { cout << "Greska: Ne postoji tekuci element!"; }
};

class GNepostojeciDatum : public exception {
public:
    GNepostojeciDatum(string err) : exception() { cout << err; }
};

class GPoslataPoruka : public exception {
public:
    GPoslataPoruka() { cout << "Greska: Poruka je vec poslata!"; }
};

#endif
