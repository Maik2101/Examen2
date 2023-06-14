#include <stdio.h>
#include "maze.h"

#define ade 5
#define atra 5

    int maze[5][5] = {
        {0, 1, 1, 1, 0},
        {0, 0, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {1, 0, 0, 1, 0}
    };
    
void imprimaze() {
    for (int i = 0; i < ade; i++) {
        for (int j = 0; j < atra; j++) {
            printf("%d ", maze[i][j]);
        }
        printf("\n");
    }
}

int posivali(int x, int y) {
    if (x >= 0 && x < ade && y >= 0 && y < atra && maze[x][y] == 0) {
        return 1;
    }
    return 0;
}

int main() {
    imprimaze();
    
    int JugadorX = 0;
    int JugadorY = 0;
    
    if (posivali(JugadorX, JugadorY)) {
        printf("Si se puede!\n");
    } else {
        printf("No se puede :( !\n");
    }
    
    return 0;
}

