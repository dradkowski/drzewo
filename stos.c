#include "stos.h"
#include <stdlib.h>
#include <stdio.h>

struct Wezel *nowy(struct Dokument dokument, struct Wezel *pTop){

    struct Wezel* result;

    result = (struct Wezel*)malloc(sizeof(struct Wezel));

    if (result == NULL){
        printf("brak pamieci");
        exit(EXIT_FAILURE);
    }

    result->dokument = dokument;
    result->poprzedni = pTop;

    return result;
}

void push(struct Wezel **pTop, struct Dokument dokument){

    //w nowym wezle wskaz top
    struct Wezel * nowyWezel = nowy(dokument, *pTop);

    *pTop = nowyWezel; //top wskazuje na nowy wezel

    print(dokument);
    printf("odłożony na stosie.\n");
}

struct Dokument pop(struct Wezel **pTop){
    struct Dokument odczytanyDokument = (*pTop)->dokument;
        struct Dokument *tmp = NULL;
        tmp = (*pTop)->poprzedni;
        free(*pTop);
        *pTop = tmp;
    return odczytanyDokument;
}

struct Dokument peek(struct Wezel *pTop){
    return pTop->dokument;
}

int isEmpty(struct Wezel *pTop){
    return !pTop;
}

void printStruct(struct Wezel *pTop){
    if (!isEmpty(pTop)){
        if (pTop->poprzedni){
            printStruct((pTop->poprzedni));
        }
        print(pTop->dokument);
    }
}



void _empty(struct Wezel *pTop){
    if(pTop->poprzedni){
        _empty(pTop->poprzedni);
    }
    free(pTop);
}


void empty(struct Wezel **pTop){
    if(!isEmpty(*pTop)){
        _empty(*pTop);
        *pTop = NULL;
    }
}
