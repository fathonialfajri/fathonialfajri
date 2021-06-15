#include <iostream>
#include "tubes.h"
#include <windows.h>
#include <string.h>

using namespace std;

int main()
{
    ListO L1;
    ListP L2;
    ListR L3;
    createListO(L1);
    createListP(L2);
    createListR(L3);
    adrP P;
    adrO O;
    adrR R;
    string namaojol, jeniskelamin, jumlahlayanan, namapenumpang;
    int pil;

    do{
        system("cls");
        cout << " 1. Menambahkan Ojol Baru "<<endl;
        cout << " 2. Menambahkan Penumpang Baru "<<endl;
        cout << " 3. Menambahkan Hubungan antara Ojol dan Penumpang "<<endl;
        cout << " 4. Menghapus Ojol tertentu "<<endl;
        cout << " 5. Menghapus Penumpang Tertentu "<<endl;
        cout << " 6. Menampilkan Ojol yang Paling Banyak Melayani Penumpang "<<endl;
        cout << " 7. Menampilkan Ojol dari Penumpang Tertentu "<<endl;
        cout << " 8. Menampilkan Penumpang yang Memesan Ojol Lebih dari Penumpang tertentu "<<endl;
        cout << " 9. Menambahkan Semua Ojol dan List Penumpangnya "<<endl;
        cout << " 0. EXIT "<<endl;
        cout << " Masukkan Pilihan : ";
        cin >> pil;
        switch(pil){
        case 1:
            system("cls");
            break;
        }
        }while(pil != 0);
}
