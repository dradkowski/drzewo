#include <stdio.h>
#include <string.h>
#include "dane.h"
#include "stos.h"
#include <stdlib.h>


int main() {
    struct Dokument dok;
    struct Wezel *top = NULL;

    dok = utworz("pierwszy", 1);
    push(&top, dok);


    dok = utworz("drugi", 2);
    push(&top, dok);
    dok = utworz("trzeci", 3);
    push(&top, dok);
    dok = utworz("czwarty", 4);
    push(&top, dok);
    dok = utworz("piaty", 5);
    push(&top, dok);

    printStruct(top);

    empty(&top);

    printStruct(top);


    system("clear");

    return 0;
}



