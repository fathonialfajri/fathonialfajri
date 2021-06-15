#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED

#include <iostream>

#define Nil NULL
#define info(P) P->info
#define next(P) P->next
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last
#define addressP(P) P->addressP
#define addressO(P) P->addressO

using namespace std;

struct ojol{
    string namaojol;
    string jeniskelamin;
    int jumlahlayanan;
};

struct penumpang{
    string namapenumpang;
    string jeniskelamin;

};

typedef struct elmOjol *adrO;
typedef struct elmPenumpang  *adrP;
typedef struct elmRelasi *adrR;

struct elmOjol{
    ojol info;
    adrO next;
    adrO prev;
};


struct elmPenumpang{
    penumpang info;
    adrP next;
    adrP prev;
};


struct elmRelasi{
   adrO addressO;
   adrP addressP;
   adrR next;
   adrR prev;

};

struct ListO{
    adrO first;
    adrO last;
};

struct ListP{
    adrP first;
    adrP last;
};

struct ListR{
    adrR first;
    adrR last;
};

void createListO(ListO &L1);
void createListP(ListP &L2);
void createListR(ListR &L3);


adrO alokasiOjol(string namaojol,string jeniskelamin);
adrP alokasiPenumpang (string namapenumpang, string jeniskelamin);
adrR alokasiRelasi (adrO O,adrP P);

void tambahOjol(ListO &L1, adrO O);
void tambahPenumpang(ListP &L2, adrP P);
void tambahRelasi(ListR &L3, adrR R);

void hapusojol(ListO &L1, adrO O);
void hapuspenumpang(ListP &L2, adrP P);

adrO searchOjol(ListO L1, string ojol);
adrP searchPenumpang(ListP L2,string nama);

void printOjolDanPenumpang(ListO L1, ListR L3);


#endif // TUBES_H_INCLUDED

