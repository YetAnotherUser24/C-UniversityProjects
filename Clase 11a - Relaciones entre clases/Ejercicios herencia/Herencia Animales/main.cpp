#include <memory> //-- para usar punteros inteligentes
#include "UFunciones.h"
#include <iostream>

int main()
{
    auto pCarne = new CAlimento("Carne", 4);
    auto pVerdura = new CAlimento("Verdura", 4);
    auto pMaiz = new CAlimento("Maiz", 4);

    shared_ptr<CGallina> pBataraza = make_shared<CGallina>('M', "Perú", "Bataraza", 5, 0);
    shared_ptr<CPerro> pBoby = make_shared<CPerro>('M', "Perú", "Boby", 4, 0);
    shared_ptr<CGato> pFelix = make_shared<CGato>('M', "Perú", "Felix", 4, 0);
    shared_ptr<CRaton> pCepillin = make_shared<CRaton>('M', "Perú", "Cepillin", 1, 0);
    shared_ptr<CBuho> pLechuga = make_shared<CBuho>('F', "Estados Unidos", "Lechuga", 3, 0);
    shared_ptr<CLeon> pMichifusa = make_shared<CLeon>('F', "Perú", "Michifusa", 25, 0);
    shared_ptr<CTigre> pPi = make_shared<CTigre>('F', "Perú", "Pi", 20, 0);

    /*auto pFelix = new CGato('M',"Perú","Felix",4,0);
    auto pBataraza = new CGallina('M',"Perú","Bataraza",5,0);
    auto pBoby = new CPerro('M',"Perú","Boby",4,0);*/

    pFelix->Alimentar(cout, pCarne);
    pFelix->Alimentar(cout, pCarne);

    pBoby->Alimentar(cout, pCarne);
    pBoby->Alimentar(cout, pVerdura);
    pBoby->Alimentar(cout, pVerdura);

    pBataraza->Alimentar(cout, pVerdura);
    pBataraza->Alimentar(cout, pVerdura);
    pBataraza->Alimentar(cout, pCarne);
    pBataraza->Alimentar(cout, pMaiz);

    pCepillin->Alimentar(cout, pCarne);
    pCepillin->Alimentar(cout, pVerdura);
    pCepillin->Alimentar(cout, pVerdura);

    pLechuga->Alimentar(cout, pCarne);
    pLechuga->Alimentar(cout, pVerdura);
    pLechuga->Alimentar(cout, pVerdura);
    pBataraza->Alimentar(cout, pMaiz);

    pMichifusa->Alimentar(cout, pCarne);
    pMichifusa->Alimentar(cout, pVerdura);
    pMichifusa->Alimentar(cout, pVerdura);

    pPi->Alimentar(cout, pCarne);
    pPi->Alimentar(cout, pVerdura);
    pPi->Alimentar(cout, pVerdura);

    cout << *pFelix << endl;
    cout << *pBoby << endl;
    cout << *pBataraza << endl;

    cout << *pCepillin << endl;
    cout << *pLechuga << endl;
    cout << *pMichifusa << endl;
    cout << *pPi << endl;

    /*delete pFelix;
    delete pBoby;
    delete pBataraza;*/

    return 0;
}