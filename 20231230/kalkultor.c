#include <stdio.h>

// fungsi perkalian
double perkalian(double n, double m)
{
    return n * m;
}

// fungsi pembagian
double pembagian(double n, double m)
{
    return n / m;
}

// fungsi tambah
double penjumlahan(double n, double m)
{
    return n + m;
}

// fungsi kurang
double pengurangan(double n, double m)
{
    return n - m;
}

// fungsi utama
void main()
{
    // printf("INI ADALAH PROGRAM KALKULATOR SEDERHANA!");
    printf("INI ADALAH PROGRAM penjumlahan dan pengurangan SEDERHANA!\n");
    printf("Tolong berikan 2 angka untuk diproses\n");
    // percabangan/ memberikan pilihan
    printf("Operasi apa yang akan anda pergunakan?\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");

    int pilihan;
    printf("Masukan pilihan anda!: ");
    scanf("%d", &pilihan);

    double angka1, angka2;

    printf("Angka pertama ialah = ");
    scanf("%lf", &angka1); // ampersand(&) menerima input dari user dan assigne ke variable setelah &

    printf("Angka kedua ialah = ");
    scanf("%lf", &angka2);

    // percabangan/ branching
    if (pilihan == 1)
    {
        printf("Hasil dari penjumlahannya ialah : %.2f\n", penjumlahan(angka1, angka2));
        return;
    }
    else if (pilihan == 2)
    {
        printf("Hasil dari pengurangan ialah : %.2f\n", pengurangan(angka1, angka2));
        return;
    }
    else if (pilihan == 3)
    {
        printf("Hasil dari perkaliannya ialah : %.2f\n", perkalian(angka1, angka2));
        return;
    }
    printf("Hasil dari pembagian ialah : %.2f\n", pembagian(angka1, angka2));

    return;
}