#include <stdio.h>
#include <string.h>

#define MAX 20
#define GUDANG 5

struct Barang{
    char kode[10];
    char nama[30];
    int harga;
    int stok;
};

struct Barang barang[MAX];
int jumlah = 10;

void tampilkanData(){
    int i;

    printf("\n===============================================================\n");
    printf("Kode\tNama Barang\tHarga\t\tStok\n");
    printf("===============================================================\n");

    for(i=0;i<jumlah;i++){
        printf("%s\t%-15s\t%d\t\t%d\n",
        barang[i].kode,
        barang[i].nama,
        barang[i].harga,
        barang[i].stok);
    }
}

void bubbleSort(){

    int i,j;
    struct Barang temp;

    for(i=0;i<jumlah-1;i++){
        for(j=0;j<jumlah-i-1;j++){

            if(barang[j].harga > barang[j+1].harga){

                temp = barang[j];
                barang[j]=barang[j+1];
                barang[j+1]=temp;

            }

        }
    }

}

void tambahBarang(){

    printf("\nTambah Data Barang\n");

    printf("Kode : ");
    scanf("%s",barang[jumlah].kode);

    printf("Nama : ");
    scanf("%s",barang[jumlah].nama);

    printf("Harga : ");
    scanf("%d",&barang[jumlah].harga);

    printf("Stok : ");
    scanf("%d",&barang[jumlah].stok);

    jumlah++;

}

void hapusBarang(){

    int index,i;

    printf("Masukkan index data yang ingin dihapus (0-%d): ",jumlah-1);
    scanf("%d",&index);

    if(index>=0 && index<jumlah){

        for(i=index;i<jumlah-1;i++){

            barang[i]=barang[i+1];

        }

        jumlah--;

        printf("Data berhasil dihapus.\n");
    }else{

        printf("Index tidak valid.\n");

    }

}

int main(){

strcpy(barang[0].kode,"A123");
strcpy(barang[0].nama,"Laptop");
barang[0].harga=9000000;
barang[0].stok=5;

strcpy(barang[1].kode,"A456");
strcpy(barang[1].nama,"Mouse");
barang[1].harga=300000;
barang[1].stok=20;

strcpy(barang[2].kode,"A789");
strcpy(barang[2].nama,"Keyboard");
barang[2].harga=2000000;
barang[2].stok=15;

strcpy(barang[3].kode,"B123");
strcpy(barang[3].nama,"Monitor");
barang[3].harga=4000000;
barang[3].stok=8;

strcpy(barang[4].kode,"B456");
strcpy(barang[4].nama,"Printer");
barang[4].harga=1200000;
barang[4].stok=6;

strcpy(barang[5].kode,"B789");
strcpy(barang[5].nama,"Flashdisk");
barang[5].harga=100000;
barang[5].stok=30;

strcpy(barang[6].kode,"C123");
strcpy(barang[6].nama,"SSD");
barang[6].harga=2000000;
barang[6].stok=10;

strcpy(barang[7].kode,"C456");
strcpy(barang[7].nama,"RAM");
barang[7].harga=1500000;
barang[7].stok=12;

strcpy(barang[8].kode,"C789");
strcpy(barang[8].nama,"Speaker");
barang[8].harga=300000;
barang[8].stok=7;

strcpy(barang[9].kode,"D123");
strcpy(barang[9].nama,"Webcam");
barang[9].harga=450000;
barang[9].stok=9;

printf("DATA AWAL");
tampilkanData();

bubbleSort();

printf("\n\nDATA SETELAH DIURUTKAN BERDASARKAN HARGA");
tampilkanData();

return 0;

}