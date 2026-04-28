/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 3 - Structures and Dynamic Array
 *   Hari dan Tanggal    : Selasa, 28/04/2026
 *   Nama (NIM)          : Alkindi Bintang Akhsan (13224022)
 *   Nama File           : soal1->c
 *   Deskripsi           : Sebuah kubah pengaman dijaga oleh petugas dalam tiga shift berbeda-> tampillan penjaga terbaik untuk tiap shift
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

struct rate{
    char shift[5];
    int skor;
    int id;
    char nama[10];
    };
    
int main(void) {
    int n;
    struct rate rating[100];
   scanf("%d", n);
   for (int i = 0; i<n; i++){
      scanf("%s", rating->nama);
      scanf("%d", rating->id);
      scanf("%s", rating->shift);
      scanf("%d", rating->skor);
    }
   
   if (rating->shift == "PAGI"){
        struct rate pagi[20];
        bubblesort(rating.skor, n);
        if (rating.skor[0] == rating.skor[1]){
            bubblesort(rating->id, n);
        }
        pagi[0] = rating[0];
    }
    if (rating->shift == "SIANG"){
        struct rate siang[20];
        bubblesort(rating->skor, n);
        if (rating->skor[0] == rating->skor[1]){
            bubblesort(rating->id, n);
        }
        siang[0] = rating[0];
    }
    if (rating->shift == "MALAM"){
        struct rate malam[20];
        bubblesort(rating->skor, n);
        if (rating->skor[0] == rating->skor[1]){
            bubblesort(rating->id, n);
        }
        pagi[0] = rating[0];
    }
    
    printf("PAGI %s %d %d\n", pagi->nama, pagi->id, pagi->skor);
    printf("SIANG %s %d %d\n", siang->nama, siang->id, siang->skor);
    printf("MALAM %s %d %d\n", malam->nama, malam->id, malam->skor);
   return 0;
 }
 

 
