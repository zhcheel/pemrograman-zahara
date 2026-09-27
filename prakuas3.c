#include <stdio.h>

int main(){

    char rute[] = {'A','B','C','D','F','G','E','A'};

    int jarak[] = {5,4,7,8,6,9,3};

    int total = 0;

    printf("Rute Perjalanan:\n");

    for(int i=0;i<8;i++){
        printf("%c",rute[i]);

        if(i<7)
            printf(" -> ");
    }

    for(int i=0;i<7;i++){
        total += jarak[i];
    }

    printf("\n\nTotal jarak = %d km\n",total);

    return 0;

}