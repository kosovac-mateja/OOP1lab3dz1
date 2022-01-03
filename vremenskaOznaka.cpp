#include "vremenskaOznaka.h"
#include <iomanip>

int VremenskaOznaka::brDana(int yr, int month) {
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            if ((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0)
                return 29;
            return 28;

    }
}

VremenskaOznaka::VremenskaOznaka(int yr, int month, int day, int hour, int min) {
    if (yr <= 0) throw GNepostojeciDatum("Greska: Zadata godina ne postoji!");
    else godina = yr;

    if (month < 1 || month > 12) throw GNepostojeciDatum("Greska: Mesec mora biti u opsegu izmedju 1 i 12!");
    else mesec = month;

    if (day < 1 || day > brDana(yr, month))
        throw GNepostojeciDatum("Greska: Nepravilan broj dana u mesecu!");
    else dan = day;

    if (hour < 0 || hour > 23) throw GNepostojeciDatum("Greska: Broj sati mora biti izmedju 0 i 23!");
    else sat = hour;

    if (min < 0 || min > 59) throw GNepostojeciDatum("Greska: Broj minuta mora biti izmedju 0 i 59!");
    else minut = min;
}

int VremenskaOznaka::getGodina() const {
    return godina;
}

int VremenskaOznaka::getMesec() const {
    return mesec;
}

int VremenskaOznaka::getDan() const {
    return dan;
}

int VremenskaOznaka::getSat() const {
    return sat;
}

int VremenskaOznaka::getMinut() const {
    return minut;
}

ostream &operator<<(ostream &os, const VremenskaOznaka &vo) {
    return os << setw(2) << setfill('0') << vo.getDan() << "."
              << setw(2) << setfill('0') << vo.getMesec() << "."
              << setw(4) << setfill('0') << vo.getGodina() << "-"
              << setw(2) << setfill('0') << vo.getSat() << ":"
              << setw(2) << setfill('0') << vo.getMinut() << endl;
}


