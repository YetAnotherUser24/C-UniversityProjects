#ifndef __MAIN_H__
#define __MAIN_H__

#include "VArquitecturas.h"
#include "SPARC.h"
#include "x86.h"
#include "MIPS.h"
#include "ARM.h"
#include "Red.h"

int main()
{
    auto _x86 = new x86();
    auto _ARM = new ARM();
    auto _MIPS = new MIPS();
    auto _SPARC = new SPARC();

    vector<Red *> arcs = {_x86, _ARM, _MIPS, _SPARC};
    auto Arquitecturas = new VArquitecturas(arcs);

    // Primer calculo
    cout << ">PRIMER CALCULO";
    Arquitecturas->setStatus("SPARC", false);
    Arquitecturas->setNumeroInstrucciones(2000);
    Arquitecturas->printData();

    // Segundo calculo
    cout << "\n\n\n>SEGUNDO CALCULO";
    Arquitecturas->setStatus("SPARC", true);
    Arquitecturas->setNumeroInstrucciones(4000);
    Arquitecturas->printData();

    // Tercer calculo
    cout << "\n\n\n>TERCER CALCULO";
    Arquitecturas->setStatus("x86", false);
    Arquitecturas->setStatus("SPARC", false);
    Arquitecturas->setDifficultyPerInstruc(3);
    Arquitecturas->setNumeroInstrucciones(3000);
    Arquitecturas->printData();

    delete Arquitecturas;
    Arquitecturas = nullptr;
    return 0;
}
#endif // __MAIN_H__