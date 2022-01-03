#include <iostream>
#include "lista.h"
#include "korisnik.h"
#include "vremenskaOznaka.h"
#include "elektronskaPorukaSaTekstom.h"

int main() {
    try {
        Korisnik k1("Mateja", "kosovac2002@gmail.com");

        Korisnik k2("Mima", "grujicmima93@gmail.com");

        ElektronskaPorukaSaTekstom epst(k1, k2, "ljonjacikcirik");

        epst.setTekst("VALJERI CIGANJ");

        epst.posaljiPoruku();

        cout << epst;
    }
    catch (exception e) {

    }

}
