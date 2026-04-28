/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 3 - Structures and Dynamic Array
 *   Hari dan Tanggal    : Selasa, 28/04/2026
 *   Nama (NIM)          : Alkindi Bintang Akhsan (13224022)
 *   Nama File           : soal1.c
 *   Deskripsi           : 
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
  
 int main(void) {
   struct rating{
      char shift[5];
      int skor;
      int id;
      char nama[10];
   }
   struct rating rate;
   int n;
   scanf("%d", n);
   for (int i = 0; i<n, i++){
      scanf("%s", rate.nama);
      scanf("%d", rate.id);
      scanf("%s", rate.shift);
      scanf("%d", rate.skor);
   }
   bubblesort(rate.skor[], n);
   if (rate.skor[0] == rate.skor[1]){
      bubblesort(rate.id[], n);
   }
   if (rate.shift == "PAGI"){
      printf("PAGI %s %d %d", rate.nama[0] rate.skor[0] rate.id[0]);
   }
   return 0;
 }
 

 
