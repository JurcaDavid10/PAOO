#include "ContBancar.h"

int main() {
    ContBancar cont1(2);
    cont1.setNumeTitular(0, "Ion Tiriac");
    cont1.setNumeTitular(1, "Donald Trunp");
    cont1.adaugaSuma(0, 100.50);
    cont1.adaugaSuma(1, 200.75);
    cont1.afiseazaConturi();

    // Test operator=
    ContBancar cont2(1);
    cont2 = cont1;
    cont2.afiseazaConturi();

    return 0;
}
