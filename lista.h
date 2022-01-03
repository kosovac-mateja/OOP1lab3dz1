#ifndef _lista_h_
#define _lista_h_

#include <iostream>

using namespace std;

template<typename T>
class Lista {
    struct Cvor {
        T pod;
        Cvor *sled;

        Cvor(T t) : pod(t), sled(nullptr) {}
    };

    Cvor *pocetak, *kraj, *tek;

    int brElem;

    void kopiraj(const Lista &l);

    void premesti(Lista &l);

    void brisi();

public:
    Lista() {
        pocetak = kraj = tek = nullptr;
        brElem = 0;
    }

    Lista(const Lista &l) { kopiraj(l); }

    Lista(Lista &&l) { premesti(l); }

    ~Lista() { brisi(); }

    Lista &operator=(const Lista &l);

    Lista &operator=(Lista &&l);

    void dodaj(const T &t);

    int getBrElem() const { return brElem; }

    void tekPocetak() { tek = pocetak; }

    void tekSled() { tek = tek->sled; }

    bool tekPostoji() const { return tek != nullptr; }

    T &getTek();

    void ispis() const;

};


#endif