/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 3 - Structures and Dynamic Array
 *   Hari dan Tanggal    : Selasa, 28/04/2026
 *   Nama (NIM)          : Alkindi Bintang Akhsan (13224022)
 *   Nama File           : soal1.c
 *   Deskripsi           : Sebuah kubah pengaman dijaga oleh petugas dalam tiga shift berbeda. tampillan penjaga terbaik untuk tiap shift
 * 
 */


 #include <stdio.h>
 #include <string.h>

 void bubblesort(int a[], int size){
   int temp;
   for (int i = 0; i<(size-1);i++){
      for (int j = 0; j<(size-1-i);j++){
         if(a[j] > a[j+1]) {
            temp = a[j+1];
            a[j+1] = a[j];
            a[j] = temp;
         }
      }
   }
 }


/.    bubblesort(rate.skor[], n);
   if (rate.skor[0] == rate.skor[1]){
      bubblesort(rate.id[], n); ./

    
 int main(void) {
   struct rating{
      char shift[5];
      int skor;
      int id;
      char nama[10];
    }
   int n;
   scanf("%d", n);
   for (int i = 0; i<n, i++){
      scanf("%s", rate.nama);
      scanf("%d", rate.id);
      scanf("%s", rate.shift);
      scanf("%d", rate.skor);
    }
   
   if (rate.shift == "PAGI"){
        struct rating pagi[20];
        bubblesort(rate.skor[], n);
        if (rate.skor[0] == rate.skor[1]){
            bubblesort(rate.id[], n);
        }
        pagi[0] = rating[0]
    }
    if (rate.shift == "SIANG"){
        struct rating siang[20];
        bubblesort(rate.skor[], n);
        if (rate.skor[0] == rate.skor[1]){
            bubblesort(rate.id[], n);
        }
        siang[0] = rating[0]
    }
    if (rate.shift == "MALAM"){
        struct rating malam[20];
        bubblesort(rate.skor[], n);
        if (rate.skor[0] == rate.skor[1]){
            bubblesort(rate.id[], n);
        }
        pagi[0] = rating[0]
    }
    
    printf("PAGI %s %d %d\n", pagi.nama pagi.id pagi.skor);
    printf("SIANG %s %d %d\n", siang.nama siang.id siang.skor);
    printf("MALAM %s %d %d\n", malam.nama malam.id malam.skor);
   return 0;
 }
 

 
