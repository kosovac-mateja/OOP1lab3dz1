#ifndef _vremenska_oznaka_
#define _vremenska_oznaka_

#include <iostream>
#include "greske.h"

using namespace std;

class VremenskaOznaka {
    int godina, mesec, dan, sat, minut;

    int brDana(int yr, int month);

public:
    VremenskaOznaka(int yr = 2022, int month = 1, int day = 1, int hour = 0, int min = 0);

    friend ostream &operator<<(ostream &os, const VremenskaOznaka &vo);

    int getGodina() const;

    int getMesec() const;

    int getDan() const;

    int getSat() const;

    int getMinut() const;
};


#endif
