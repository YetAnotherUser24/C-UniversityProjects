#include "CGandalf.h"
#include "CAnimo.h"
int main()
{
    auto Gandalf = new CGandalf();
    auto Melon = new CMelon();
    auto Manzana = new CManzana();

    auto Animo = new CAnimo();

    Gandalf->dar_comer(Melon);
    Gandalf->dar_comer(Manzana);

    Animo->set(Gandalf->get_ptsf());

    cout << Animo->get_estado();
}