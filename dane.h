//
// Created by darek on 25.01.19.
//

#ifndef STOS_DANE_H
#define STOS_DANE_H


struct Dokument{
    char zawartosc[200];
    int nrDokumentu;
};

void print(struct Dokument dokument);
struct Dokument utworz(char *string, int i);

#endif //STOS_DANE_H
