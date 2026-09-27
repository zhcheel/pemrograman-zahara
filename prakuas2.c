#include <stdio.h>

#define MAX 6

struct Gudang{
    char nama;
    int barang;
};

struct Gudang data[MAX]={
    {'A',250},
    {'B',180},
    {'C',320},
    {'D',150},
    {'E',275},
    {'F',200}
};

void tampilData(){

    int i;

    printf("\n=============================\n");
    printf("Gudang\tJumlah Barang\n");
    printf("=============================\n");

    for(i=0;i<MAX;i++){
        printf("%c\t%d\n",data[i].nama,data[i].barang);
    }

}

void bubbleSortDesc(){

    int i,j;
    struct Gudang temp;

    for(i=0;i<MAX-1;i++){

        for(j=0;j<MAX-i-1;j++){

            if(data[j].barang < data[j+1].barang){

                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;

            }

        }

    }

}

int main(){

    printf("DATA SEBELUM SORTING");
    tampilData();

    bubbleSortDesc();

    printf("\n\nDATA SETELAH SORTING (TERBESAR -> TERKECIL)");
    tampilData();

    return 0;
}