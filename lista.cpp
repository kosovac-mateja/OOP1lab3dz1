#include "lista.h"
#include "greske.h"

template
class Lista<int>;

template<typename T>
void Lista<T>::kopiraj(const Lista &l) {
    pocetak = kraj = tek = nullptr;

    for (Cvor *tren = l.pocetak; tren; tren = tren->sled) {
        Cvor *novi = new Cvor(tren->pod);

        if (!pocetak) pocetak = novi;
        else kraj->sled = novi;

        kraj = novi;

        if (tren == l.tek) tek = novi;
    }
}

template<typename T>
void Lista<T>::premesti(Lista &l) {
    pocetak = l.pocetak;

    kraj = l.kraj;

    l.pocetak = l.kraj = nullptr;
}

template<typename T>
void Lista<T>::brisi() {
    Cvor *tren = pocetak, *sled = nullptr;

    while (tren) {
        sled = tren->sled;

        delete tren;

        tren = sled;
    }
}

template<typename T>
Lista<T> &Lista<T>::operator=(const Lista &l) {
    if (this != &l) {
        brisi();

        kopiraj(l);
    }

    return *this;
}

template<typename T>
Lista<T> &Lista<T>::operator=(Lista &&l) {
    if (this != &l) {
        brisi();

        premesti(l);
    }

    return *this;
}

template<typename T>
void Lista<T>::dodaj(const T &t) {
    Cvor *novi = new Cvor(t);

    if (!pocetak) pocetak = novi;
    else kraj->sled = novi;

    kraj = novi;

    brElem++;
}

template<typename T>
void Lista<T>::ispis() const {
    for (Cvor *tren = pocetak; tren; tren = tren->sled)
        cout << tren->pod << " ";
}

template<typename T>
T &Lista<T>::getTek() {
    if (tekPostoji() == true) return tek->pod;
    else throw GNemaTek();
}


