#include "tubes.h"

void createListO(ListO &L1){
    first(L1) = NULL;
}
void createListP(ListP &L2){
    first(L2) = NULL;
}
void createListR(ListR &L3){
    first(L3) = NULL;
}

adrO alokasiOjol(string namaojol,string jeniskelamin, int jumlahlayanan){
    adrO O = new elmOjol;
    info(O).namaojol = namaojol;
    info(O).jeniskelamin = jeniskelamin;
    info(O).jumlahlayanan = jumlahlayanan;
    next(O) = NULL;
    prev(O) = NULL;

    return O;

}
adrP alokasiPenumpang(string namapenumpang, string jeniskelamin){
    adrP P = new elmPenumpang;
    info(P).namapenumpang = namapenumpang;
    info(P).jeniskelamin = jeniskelamin;
    next(P) = NULL;

    return P;

}
adrR alokasiRelasi (adrO O,adrP P){
    adrR R = new elmRelasi;
    addressO(R) = O;
    addressP(R) = P;
    next(R) = NULL;

    return R;

}

void tambahOjol(ListO &L1, adrO O){
    if(first(L1) == NULL){
        first(L1) = O;
    }else{
        prev(O) = last(L1);
        next(last(L1)) = O;
        last(L1) = O;
    }
}
void tambahPenumpang(ListP &L2, adrP P){
    if(first(L2) == NULL){
        first(L2) = P;
    }else{
        prev(P) = last(L2);
        next(last(L2)) = P;
        last(L2) = P;
    }
}

void tambahRelasi(ListR &L3, adrR R){
    if(first(L3) == NULL){
        first(L3) = R;
    }else{
        prev(R) = last(L3);
        next(last(L3)) = R;
        last(L3) = R;
    }
}

void hapusojol(ListO &L1, string X)
{
    adrO O;

    O = first(L1);
    while ((next(O) != NULL) && (info(O).namaojol != X))
    {
        O = next(O);
    }
    if (info(first(L1)).namaojol == X)
    {
        //DeleteFirst
        O = first(L1);
        first(L1) = next(O);
        next(O) = NULL;
        prev(first(L1)) = O;
    }
    else if (info(last(L1)).namaojol == X)
    {
        //DeleteLast
        O = last(L1);
        last(L1) = prev(last(L1));
        prev(O) = NULL;
        next(last(L1)) = NULL;
    }
    else if (O != NULL)
    {
        next(prev(O)) = next(O);
        prev(next(O)) = prev(O);
        prev(O) = NULL;
        next(O) = NULL;
    }
    else
    {
        cout << "Tidak Ada" <<endl;
    }
}

void hapuspenumpang(ListP &L2, string X)
{
    adrP P;

    P = first(L2);
    while ((next(P) != NULL) && (info(P).namapenumpang != X))
    {
        P = next(P);
    }
    if (info(first(L2)).namapenumpang == X)
    {
        //DeleteFirst
        P = first(L2);
        first(L2) = next(P);
        next(P) = NULL;
        prev(first(L2)) = P;
    }
    else if (info(last(L2)).namapenumpang == X)
    {
        //DeleteLast
        P = last(L2);
        last(L2) = prev(last(L2));
        prev(P) = NULL;
        next(last(L2)) = NULL;
    }
    else if (P != NULL)
    {
        next(prev(P)) = next(P);
        prev(next(P)) = prev(P);
        prev(P) = NULL;
        next(P) = NULL;
    }
    else
    {
        cout << "Tidak Ada" <<endl;
    }
}

adrO searchOjol(ListO L1, string ojol){
    if(first(L1) != NULL){
        adrO O = first(L1);
        while((next(O) != NULL) && (info(O).namaojol != ojol)){
            O = next(O);
        }
        if(info(O).namaojol == ojol){
            return O;
        }
        return NULL;
    }else{
        cout<<"Data Kosong"<<endl;
        return NULL;
    }
}

adrP searchPenumpang(ListP L2,string nama){
    if(first(L2) != NULL){
        adrP P = first(L2);
        while(next(P) != first(L2) && info(P).namapenumpang != nama){
            P = next(P);
        }
        if(info(P).namapenumpang == nama){
            return P;
        }
        return NULL;
    }else{
        cout<<"Data Kosong"<<endl;
        return NULL;
    }

}

void printOjolDanPenumpang(ListO L1, ListR L3, ListP L2){
    if(first(L1) != NULL && first(L3) != NULL && (first(L2) != NULL)){
        adrO O;
        adrR Q;
        cout << "Data Ojol"<<endl;
        cout << "Nama Ojol : "<<"\t\t\t Jenis Kelamin : "<<" \t\t\t Jumlah Layanan : "<<"\t\t\t Nama Penumpang : "<<" \t\t\t Jenis Kelamin : "<<endl;
        O = first(L1);
        do{
             Q = first(L3);
             cout<<info(O).namaojol<<"\t\t\t\t"<<info(O).jeniskelamin<<"\t\t\t\t\t"<<info(O).jumlahlayanan<<"\t\t\t\t\t"<<endl;

            do{
                Q = next(Q);
                }while ((Q) != NULL);
            O = next(O);

        }while(O != NULL);
    }

    else{
        cout<<"Data Kosong"<<endl;
    }

}
