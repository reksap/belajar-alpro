#include <stdio.h>
#define double PHI = 3.14; // mendefinisikan constanta

// variable
int x = 7;

// constanta -> variable yang tidak berubah
const int y = 10;

int tambah() {
    x = 9; // assignment 9 ke x
    return x + y; // x + y ialah expression
}

double luasLingkaran(int jariJari) {
    return jariJari * PHI;
}

// fungsi selain main, harus ditulis terlebih dahulu dari fungsi main
void tulis() { // void ialah type untuk function yang tidak mengembalikan sesuatu
    printf("hello world!\n");
    printf("hello reksa!\n");
    printf("%d\n",1);
    printf("hasil dari tambah ialah: %d\n", tambah());
}

// type nama-fungsi()
int main() { // fungsi main, tindak menerima input
    tulis(); // satu statment perintah yang di akhiri dengan semicolon
    printf("hasil lingkaran dari jari-jari 4 ialah: %.2f\n", luasLingkaran(4));
    return 0; // kalau sebuah program c mengeluarkan balikan angka 0, berarti tidak ada yang error di program tersebut
}