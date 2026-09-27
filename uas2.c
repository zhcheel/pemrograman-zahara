#include <stdio.h>

#define V 7
#define INF 9999

int graph[V][V] = {
    {0,2,6,0,4,0,0},
    {2,0,3,5,0,0,0},
    {6,3,0,7,5,0,0},
    {0,5,7,0,0,8,0},
    {4,0,5,0,0,6,9},
    {0,0,0,8,6,0,1},
    {0,0,0,0,9,1,0}
};

int main() {
    int selected[V] = {0};
    selected[0] = 1;

    int edge = 0;
    int total = 0;

    printf("Minimum Spanning Tree\n\n");

    while(edge < V-1){

        int min = INF;
        int x = 0;
        int y = 0;

        for(int i=0;i<V;i++){
            if(selected[i]){
                for(int j=0;j<V;j++){
                    if(!selected[j] && graph[i][j]){
                        if(graph[i][j] < min){
                            min = graph[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }

        printf("%c - %c = %d\n",'A'+x,'A'+y,graph[x][y]);

        total += graph[x][y];
        selected[y] = 1;
        edge++;
    }

    printf("\nTotal biaya minimum = %d\n",total);

    return 0;
}