#include <string.h>
#include <stdio.h>
#include "dane.h"

void print(struct Dokument dokument){
    printf("Nr dokumentu %i", dokument.nrDokumentu);
    printf(" %s\n", dokument.zawartosc);

}

struct Dokument utworz(char *string, int i) {
    struct Dokument result;
    result.nrDokumentu = i;
    strcpy(result.zawartosc, string);
    return result;
}

