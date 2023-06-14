#include <stdio.h>
#include "player.h"

int posicionX = 0;
int posicionY = 0;
int movimientos = 0;

int valimovi(int x, int y) {
}

int acabajuego() {
}

void movimiento(char movi) {
    printf("Bienvenido\n");

    while (!acabajuego()) {
        printf("Posición actual del jugador: (%d, %d)\n", posicionX, posicionY);
        printf("Ingrese una tecla (W, A, S, D) para moverte: ");
        scanf(" %c", &movi);

        switch (movi) {
            case 'W':
            case 'w':
                posicionY--;
                break;
            case 'A':
            case 'a':
                posicionX--;
                break;
            case 'S':
            case 's':
                posicionY++;
                break;
            case 'D':
            case 'd':
                posicionX++;
                break;
            default:
                printf("Tecla no válida. Solo se permiten W, A, S o D.\n");
                continue; 
        }

        printf("\n");
        
        if (valimovi(posicionX, posicionY)) {
            movimientos++;
        } else {
            printf("Movimiento no válido. Intenta de nuevo.\n");
            continue; 
        }

        if (posicionX == 3 && posicionY == 3) {
            printf("¡Genial, ganaste!\n");
        }

        if (movimientos <= 10) {
            printf("¡Eres un PRO!\n");
        } else if (movimientos <= 12) {
            printf("Nada mal, Novato\n");
        } else {
            printf("Noob\n");
        }
    }
}

int main() {
    movimiento(0);
    return 0;
}
