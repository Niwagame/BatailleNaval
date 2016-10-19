#include <stdio.h>
#include <stdlib.h>

#define MAP_W 18
#define MAP_H 24
#define MAP_ITEMS 3
int main(){
int map [MAP_H][MAP_W][MAP_ITEMS];
IntTableau(map,0);
PrintTableau(map,0);
}


void waitFor (unsigned int secs) {
    unsigned int retTime = time(0) + secs;
    while (time(0) < retTime);
}

int doRand(int startVal, int endVal){
    waitFor(0.05);
    srand(time(NULL)*rand());
    if(startVal == 0 && endVal == 1){
        return rand() % 2;
    }else{
        return (rand() % ((endVal + startVal -1)) + startVal);
    }
}

void IntTableau(int map[MAP_H][MAP_W][MAP_ITEMS],int item){
int i,j;
    for(i = 0;i < MAP_H; i++){
        for(j = 0;j < MAP_W; j++){
            map[i][j][item]=0;
    }
    }
}
void PrintTableau(int map[MAP_H][MAP_W][MAP_ITEMS],int item){
int i,j;
    for(i = -1;i < MAP_H+1; i++){
        for(j = -1;j < MAP_W+1; j++){
            if((i == -1)&&(j == -1)){
                printf("*");
            }else if(i == 0 || i == MAP_H || j == 0 || j == MAP_W){
                    printf("#");
            }else{
                if(map[i][j][item]!=1){
                    printf("%d ",map[i][j][item]);
                }else{
                    printf(" ");
                }
            }
    }
    printf("\n");
    }
}

