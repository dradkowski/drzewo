
#ifndef STOS2_STOS_H
#define STOS2_STOS_H

#include "dane.h"

struct Wezel{
    struct Dokument dokument;
    struct Wezel *poprzedni;
};

void push(struct Wezel **pTop, struct Dokument dokument);
struct Dokument pop(struct Wezel **pTop);
struct Dokument peek(struct Wezel *pTop);
int isEmpty(struct Wezel *pTop);
void printStruct(struct Wezel *pTop);
void empty(struct Wezel **pTop);

#endif //STOS2_STOS_H
